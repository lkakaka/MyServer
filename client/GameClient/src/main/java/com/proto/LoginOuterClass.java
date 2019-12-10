// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: login.proto

package com.proto;

public final class LoginOuterClass {
  private LoginOuterClass() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface LoginOrBuilder extends
      // @@protoc_insertion_point(interface_extends:Login)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>string account = 1;</code>
     */
    java.lang.String getAccount();
    /**
     * <code>string account = 1;</code>
     */
    com.google.protobuf.ByteString
        getAccountBytes();

    /**
     * <code>string pwd = 2;</code>
     */
    java.lang.String getPwd();
    /**
     * <code>string pwd = 2;</code>
     */
    com.google.protobuf.ByteString
        getPwdBytes();
  }
  /**
   * Protobuf type {@code Login}
   */
  public  static final class Login extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:Login)
      LoginOrBuilder {
  private static final long serialVersionUID = 0L;
    // Use Login.newBuilder() to construct.
    private Login(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Login() {
      account_ = "";
      pwd_ = "";
    }

    @java.lang.Override
    @SuppressWarnings({"unused"})
    protected java.lang.Object newInstance(
        UnusedPrivateParameter unused) {
      return new Login();
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return this.unknownFields;
    }
    private Login(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      if (extensionRegistry == null) {
        throw new java.lang.NullPointerException();
      }
      com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder();
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            case 10: {
              java.lang.String s = input.readStringRequireUtf8();

              account_ = s;
              break;
            }
            case 18: {
              java.lang.String s = input.readStringRequireUtf8();

              pwd_ = s;
              break;
            }
            default: {
              if (!parseUnknownField(
                  input, unknownFields, extensionRegistry, tag)) {
                done = true;
              }
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        this.unknownFields = unknownFields.build();
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return com.proto.LoginOuterClass.internal_static_Login_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return com.proto.LoginOuterClass.internal_static_Login_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              com.proto.LoginOuterClass.Login.class, com.proto.LoginOuterClass.Login.Builder.class);
    }

    public static final int ACCOUNT_FIELD_NUMBER = 1;
    private volatile java.lang.Object account_;
    /**
     * <code>string account = 1;</code>
     */
    public java.lang.String getAccount() {
      java.lang.Object ref = account_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        account_ = s;
        return s;
      }
    }
    /**
     * <code>string account = 1;</code>
     */
    public com.google.protobuf.ByteString
        getAccountBytes() {
      java.lang.Object ref = account_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        account_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    public static final int PWD_FIELD_NUMBER = 2;
    private volatile java.lang.Object pwd_;
    /**
     * <code>string pwd = 2;</code>
     */
    public java.lang.String getPwd() {
      java.lang.Object ref = pwd_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        pwd_ = s;
        return s;
      }
    }
    /**
     * <code>string pwd = 2;</code>
     */
    public com.google.protobuf.ByteString
        getPwdBytes() {
      java.lang.Object ref = pwd_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        pwd_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    private byte memoizedIsInitialized = -1;
    @java.lang.Override
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    @java.lang.Override
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (!getAccountBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 1, account_);
      }
      if (!getPwdBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 2, pwd_);
      }
      unknownFields.writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (!getAccountBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, account_);
      }
      if (!getPwdBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, pwd_);
      }
      size += unknownFields.getSerializedSize();
      memoizedSize = size;
      return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof com.proto.LoginOuterClass.Login)) {
        return super.equals(obj);
      }
      com.proto.LoginOuterClass.Login other = (com.proto.LoginOuterClass.Login) obj;

      if (!getAccount()
          .equals(other.getAccount())) return false;
      if (!getPwd()
          .equals(other.getPwd())) return false;
      if (!unknownFields.equals(other.unknownFields)) return false;
      return true;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + ACCOUNT_FIELD_NUMBER;
      hash = (53 * hash) + getAccount().hashCode();
      hash = (37 * hash) + PWD_FIELD_NUMBER;
      hash = (53 * hash) + getPwd().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static com.proto.LoginOuterClass.Login parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.proto.LoginOuterClass.Login parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.proto.LoginOuterClass.Login parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.proto.LoginOuterClass.Login parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.proto.LoginOuterClass.Login parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static com.proto.LoginOuterClass.Login parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static com.proto.LoginOuterClass.Login parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static com.proto.LoginOuterClass.Login parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static com.proto.LoginOuterClass.Login parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static com.proto.LoginOuterClass.Login parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static com.proto.LoginOuterClass.Login parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static com.proto.LoginOuterClass.Login parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    @java.lang.Override
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(com.proto.LoginOuterClass.Login prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    @java.lang.Override
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code Login}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:Login)
        com.proto.LoginOuterClass.LoginOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return com.proto.LoginOuterClass.internal_static_Login_descriptor;
      }

      @java.lang.Override
      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return com.proto.LoginOuterClass.internal_static_Login_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                com.proto.LoginOuterClass.Login.class, com.proto.LoginOuterClass.Login.Builder.class);
      }

      // Construct using com.proto.LoginOuterClass.Login.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      @java.lang.Override
      public Builder clear() {
        super.clear();
        account_ = "";

        pwd_ = "";

        return this;
      }

      @java.lang.Override
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return com.proto.LoginOuterClass.internal_static_Login_descriptor;
      }

      @java.lang.Override
      public com.proto.LoginOuterClass.Login getDefaultInstanceForType() {
        return com.proto.LoginOuterClass.Login.getDefaultInstance();
      }

      @java.lang.Override
      public com.proto.LoginOuterClass.Login build() {
        com.proto.LoginOuterClass.Login result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      @java.lang.Override
      public com.proto.LoginOuterClass.Login buildPartial() {
        com.proto.LoginOuterClass.Login result = new com.proto.LoginOuterClass.Login(this);
        result.account_ = account_;
        result.pwd_ = pwd_;
        onBuilt();
        return result;
      }

      @java.lang.Override
      public Builder clone() {
        return super.clone();
      }
      @java.lang.Override
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return super.setField(field, value);
      }
      @java.lang.Override
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return super.clearField(field);
      }
      @java.lang.Override
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return super.clearOneof(oneof);
      }
      @java.lang.Override
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, java.lang.Object value) {
        return super.setRepeatedField(field, index, value);
      }
      @java.lang.Override
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          java.lang.Object value) {
        return super.addRepeatedField(field, value);
      }
      @java.lang.Override
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof com.proto.LoginOuterClass.Login) {
          return mergeFrom((com.proto.LoginOuterClass.Login)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(com.proto.LoginOuterClass.Login other) {
        if (other == com.proto.LoginOuterClass.Login.getDefaultInstance()) return this;
        if (!other.getAccount().isEmpty()) {
          account_ = other.account_;
          onChanged();
        }
        if (!other.getPwd().isEmpty()) {
          pwd_ = other.pwd_;
          onChanged();
        }
        this.mergeUnknownFields(other.unknownFields);
        onChanged();
        return this;
      }

      @java.lang.Override
      public final boolean isInitialized() {
        return true;
      }

      @java.lang.Override
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.proto.LoginOuterClass.Login parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (com.proto.LoginOuterClass.Login) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private java.lang.Object account_ = "";
      /**
       * <code>string account = 1;</code>
       */
      public java.lang.String getAccount() {
        java.lang.Object ref = account_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          account_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string account = 1;</code>
       */
      public com.google.protobuf.ByteString
          getAccountBytes() {
        java.lang.Object ref = account_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          account_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string account = 1;</code>
       */
      public Builder setAccount(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        account_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string account = 1;</code>
       */
      public Builder clearAccount() {
        
        account_ = getDefaultInstance().getAccount();
        onChanged();
        return this;
      }
      /**
       * <code>string account = 1;</code>
       */
      public Builder setAccountBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        account_ = value;
        onChanged();
        return this;
      }

      private java.lang.Object pwd_ = "";
      /**
       * <code>string pwd = 2;</code>
       */
      public java.lang.String getPwd() {
        java.lang.Object ref = pwd_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          pwd_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string pwd = 2;</code>
       */
      public com.google.protobuf.ByteString
          getPwdBytes() {
        java.lang.Object ref = pwd_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          pwd_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string pwd = 2;</code>
       */
      public Builder setPwd(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        pwd_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string pwd = 2;</code>
       */
      public Builder clearPwd() {
        
        pwd_ = getDefaultInstance().getPwd();
        onChanged();
        return this;
      }
      /**
       * <code>string pwd = 2;</code>
       */
      public Builder setPwdBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        pwd_ = value;
        onChanged();
        return this;
      }
      @java.lang.Override
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.setUnknownFields(unknownFields);
      }

      @java.lang.Override
      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return super.mergeUnknownFields(unknownFields);
      }


      // @@protoc_insertion_point(builder_scope:Login)
    }

    // @@protoc_insertion_point(class_scope:Login)
    private static final com.proto.LoginOuterClass.Login DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new com.proto.LoginOuterClass.Login();
    }

    public static com.proto.LoginOuterClass.Login getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Login>
        PARSER = new com.google.protobuf.AbstractParser<Login>() {
      @java.lang.Override
      public Login parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
        return new Login(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Login> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Login> getParserForType() {
      return PARSER;
    }

    @java.lang.Override
    public com.proto.LoginOuterClass.Login getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_Login_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_Login_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\013login.proto\"%\n\005Login\022\017\n\007account\030\001 \001(\t\022" +
      "\013\n\003pwd\030\002 \001(\tB\013\n\tcom.protob\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        });
    internal_static_Login_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_Login_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_Login_descriptor,
        new java.lang.String[] { "Account", "Pwd", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
