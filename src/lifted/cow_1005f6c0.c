/* f_0x1005f6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_1005f6c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x10074790u), self, in_edx, 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x1003b540u), self + 0x34u, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(self, COW_IMG(0x1032ba7cu));
    wr32(self + 0x34u, COW_IMG(0x1032ba60u));
    wr8(self + 0x86u, (uint8_t)arg6);
    wr8(self + 0x84u, (uint8_t)arg5);
    wr8(self + 0x85u, 0u);
    edx = (t4 & 0xffffff00u) | (uint8_t)arg5;
L_1005f700: ;
    eax = arg2;
    ebp = rd32(arg2 + 0x68u);
L_1005f707: ;
    if (ebp == 0u) goto L_1005f768;
    g->eax = eax;
    g->edx = rd32(ebp);
    t5 = rd32(ebp);
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, rd32(t5 + 0x18u), ebp, 0);
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_1005f758;
    }
    eax = t6;
    edx = t7;
    esi = t6;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t8 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x1032b7c8u));
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        edx = t9;
    }
    else
    {
        edx = t9;
        if (rd32(esi + 0x10u) == rd32(self + 0x10u))
        {
            eax = rd32(esi + 0x10u);
        }
        else
        {
            eax = rd32(esi + 0x10u);
            wr8(self + 0x85u, 1u);
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t10 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x1032b7e0u));
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        edx = t12;
        goto L_1005f758;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    if (rd8(esi + 0x84u) == (uint8_t)arg5)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg5;
        goto L_1005f75d;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg5;
L_1005f758: ;
    ebp = rd32(ebp + 0x2cu);
    goto L_1005f707;
L_1005f75d: ;
    g->edx = rd32(esi);
    t13 = rd32(esi);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t13 + 0x18u), esi, 1, 1u);
    t14 = g->edx;
    edx = t14;
    goto L_1005f700;
L_1005f768: ;
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, COW_IMG(0x1003b7b0u), self + 0x34u, 1, arg2);
    t16 = g->edx;
    wrf32(self + 0x74u, (float)(double)(int32_t)arg4);
    wrf32(self + 0x78u, (float)(double)(int32_t)arg4);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t18 = g->edx;
    if (t17 != 0u)
    {
        eax = t17;
        edx = t18;
        if ((uint8_t)arg5 == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg5;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t21 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            t22 = cow_thiscall(g, rd32(rd32(t21) + 0x2cu), t21, 0);
            eax = t22;
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg5;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t19 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            t20 = cow_thiscall(g, rd32(rd32(t19) + 0x40cu), t19, 0);
            eax = t20;
        }
        wr32(self + 0x7cu, eax);
    }
    wr32(self + 0x80u, rd32(arg3));
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005f6c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005f6c0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
