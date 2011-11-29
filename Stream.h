/*
 * Stream.h
 *
 *  Created on: 2011-11-30
 *      Author: Gezidan
 *       Email: cha.net@qq.com
 */

#ifndef STREAM_H_
namespace System
{
	class Stream
	{
	public:
		virtual bool CanRead() const=0;
		virtual bool CanSeek() const=0;
		virtual bool CanTimeout() const=0;
		virtual bool CanWrite() const=0;
		virtual long GetLength() const=0;
		virtual bool SetLength(long value)=0;
		virtual long GetPosition() const=0;
		virtual int GetReadTimeout() const =0;
		virtual bool SetReadTimeout(int timeout)=0;
		virtual int GetWriteTimeout() const=0;
		virtual bool SetWriteTimeout(int timeout)=0;
		virtual bool Close()=0;
		virtual bool CopyTo(Stream &destination)=0;
		virtual bool CopyTo(Stream &destination,int bufferSize)=0;
		virtual bool Flush()=0;
		virtual int Read(char *buffer,int offset,int count)=0;
		virtual int ReadByte()=0;
		virtual long Seek(long offset,SeekOrigin origin);
		static const  Stream *Synchronized(Stream &stream)=0;
		virtual bool Write(char *buffer,int offset,int count);
		virtual bool WriteByte(char value)=0;
		static const Stream &GetNullStream()=0;
	};
}
#define STREAM_H_




#endif /* STREAM_H_ */
