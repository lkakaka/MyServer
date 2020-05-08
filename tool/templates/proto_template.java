package com.proto;

public class ProtoBufferMsg {
{% for proto_obj in render_obj.proto_list %}
	public static final int {{ proto_obj.msg_id_var }} = {{ proto_obj.msg_id }};
{% endfor %}

	public static Object createMsgById(int msgId, byte[] dat) {
		try {
			switch (msgId)
			{
{% for proto_obj in render_obj.proto_list %}
				case {{ proto_obj.msg_id_var }}:
					return {{ proto_obj.java_file_name }}.{{ proto_obj.proto_name }}.parseFrom(dat);
{% endfor %}
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		return null;
	}

	public static Object createBuilderById(int msgId) {
		switch (msgId) {
{% for proto_obj in render_obj.proto_list %}
			case {{ proto_obj.msg_id_var }}:
				return {{ proto_obj.java_file_name }}.{{ proto_obj.proto_name }}.newBuilder();
{% endfor %}
		}
		return null;
	}
	
{% for proto_obj in render_obj.proto_list %}
	public static {{ proto_obj.java_file_name }}.{{ proto_obj.proto_name }}.Builder create{{ proto_obj.proto_name }}Builder() {
		return {{ proto_obj.java_file_name }}.{{ proto_obj.proto_name }}.newBuilder();
	}
	
{% endfor %}
}


