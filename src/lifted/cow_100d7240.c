/* f_0x100d7240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100d7240(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100c52a0u), self, 1, 0u);
    t2 = rd32(self + 0x88u);
    wr32(self, COW_IMG(0x103313e8u));
    wr32(self + 0x88u, t2 | 8u);
    cow_fastcall(g, COW_IMG(0x100c5d60u), self, t2 | 8u, 0);
    wr32(self + 0xa4u, arg3);
    if (rd32(arg2 + 0xa0u) != 0u)
    {
        edx = rd32(arg2 + 0xa0u);
        goto L_100d7320;
    }
    edx = rd32(arg2 + 0xa0u);
    if ((int32_t)arg3 < 37) goto L_100d729f;
    if ((int32_t)arg3 > 52) goto L_100d729f;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    return self;
L_100d729f: ;
    if ((int32_t)arg3 < 5) goto L_100d72bc;
    if ((int32_t)arg3 > 36) goto L_100d72bc;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    return self;
L_100d72bc: ;
    if ((int32_t)arg3 < 61) goto L_100d72d9;
    if ((int32_t)arg3 > 81) goto L_100d72d9;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    return self;
L_100d72d9: ;
    if ((int32_t)arg3 < 82) goto L_100d72f3;
    if (arg3 != 0x52u && (int32_t)(arg3 - 0x52u) < 0 == ((arg3 ^ 0x52u) & (arg3 ^ arg3 - 0x52u)) >> 0x1fu) goto L_100d72f3;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    return self;
L_100d72f3: ;
    if ((int32_t)arg3 < 83) goto L_100d730d;
    if (arg3 != 0x53u && (int32_t)(arg3 - 0x53u) < 0 == ((arg3 ^ 0x53u) & (arg3 ^ arg3 - 0x53u)) >> 0x1fu) goto L_100d730d;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    return self;
L_100d730d: ;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    return self;
L_100d7320: ;
    if ((int32_t)arg3 < 83) goto L_100d732e;
    if (arg3 != 0x53u && (int32_t)(arg3 - 0x53u) < 0 == ((arg3 ^ 0x53u) & (arg3 ^ arg3 - 0x53u)) >> 0x1fu) goto L_100d732e;
    ecx = arg3 - 0x48u;
L_100d7358: ;
    wr32(ecx * 4u + self + 0x768u, edx);
    wr32(ecx * 4u + edx + 0x768u, self);
    t3 = rd32(rd32(ecx * 4u + self + 0x768u) + 0x70u);
    t4 = rd32(ecx * 4u + self + 0x768u);
    wr32(self + 0x70u, t3);
    g->eax = t3;
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x5fcu, arg1);
    t6 = g->edx;
    wr32(self + 0x608u, 0x3f800000u);
    g->ecx = self + 0x9d8u;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x9d8u, arg1);
    t8 = g->ecx;
    wr32(self + 0x9e4u, 0x3f800000u);
    g->ecx = t8;
    g->edx = self + 0x678u;
    g->esp = sp0 - 0x1cu;
    t9 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x678u, self + 0x5fcu);
    t10 = g->ecx;
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    t12 = cow_stdcall(g, COW_IMG(0x10093db0u), 0);
    t13 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        eax = t12;
        edx = t13;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x100d73e0u), self, 0);
    }
    return self;
L_100d732e: ;
    if ((int32_t)arg3 < 82) goto L_100d733a;
    if (arg3 != 0x52u && (int32_t)(arg3 - 0x52u) < 0 == ((arg3 ^ 0x52u) & (arg3 ^ arg3 - 0x52u)) >> 0x1fu) goto L_100d733a;
    ecx = arg3 - 0x48u;
    goto L_100d7358;
L_100d733a: ;
    if ((int32_t)arg3 < 53) goto L_100d7349;
    if ((int32_t)arg3 > 60) goto L_100d7349;
    ecx = arg3 - 0x33u;
    goto L_100d7358;
L_100d7349: ;
    if ((int32_t)arg3 < 37)
    {
        ecx = 0u;
    }
    else
    {
        if ((int32_t)arg3 > 52)
        {
            ecx = 0u;
        }
        else
        {
            ecx = 1u;
        }
    }
    goto L_100d7358;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d7240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d7240(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
