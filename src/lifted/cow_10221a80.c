/* f_0x10221a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10221a80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(self + 0x4cu, arg2);
    t1 = rd32(self + 8u);
    wr32(self + 0x40u, arg1);
    if (t1 == 0u)
    {
        eax = t1;
        ebp = arg1;
    }
    else
    {
        eax = t1;
        t2 = rd32(eax + 0x88u);
        wr32(t2 + 0x10u, arg1);
        ebp = t2;
    }
    t3 = rd32(self + 0x50u);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t3, in_edx, 1, 1, t3);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd32(self + 0x4cu);
    wr32(self + 0x50u, 0u);
    if (t6 != 0u)
    {
        eax = t6;
        ecx = t4;
        edx = t5;
        if ((int32_t)arg1 <= 0)
        {
            edi = 0u;
            goto L_10221af2;
        }
        edi = 0u;
L_10221adf: ;
        g->eax = eax;
        g->edx = rd32(self);
        t7 = rd32(self);
        g->esp = sp0 - 0x10u;
        t8 = cow_thiscall(g, rd32(t7 + 0x44u), self, 1, edi);
        t9 = g->ecx;
        t10 = g->edx;
        if (edi + t8 == arg1)
        {
            ecx = t9;
            edx = t10;
            goto L_10221af2;
        }
        eax = edi + t8;
        ecx = t9;
        edx = t10;
        if ((int32_t)(edi + 1u) < (int32_t)arg1)
        {
            edi = edi + 1u;
            goto L_10221adf;
        }
        edi = edi + 1u;
L_10221af2: ;
        t11 = rd32(self + 0x38u);
        wr32(self + 0x3cu, edi);
        if ((int32_t)t11 > (int32_t)edi)
        {
            eax = t11;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10221e10u), self, 1, edi);
            t12 = g->ecx;
            t13 = g->edx;
            ecx = t12;
            edx = t13;
        }
        if (rd32(self + 0x3cu) != 0u)
        {
            eax = rd32(self + 0x3cu);
            t14 = eax * 4u + 4u;
            g->esp = sp0 - 8u;
            t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t14, in_edi, in_esi);
            wr32(self + 0x50u, t15);
            if ((int32_t)rd32(self + 0x3cu) < 0) goto L_10221b3e;
            eax = rd32(self + 0x3cu);
            edi = 0u;
L_10221b27: ;
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t16 = cow_thiscall(g, rd32(rd32(self) + 0x44u), self, 1, edi);
            wr32(edi * 4u + rd32(self + 0x50u), t16);
            if ((int32_t)(edi + 1u) <= (int32_t)rd32(self + 0x3cu))
            {
                eax = rd32(self + 0x3cu);
                edi = edi + 1u;
                goto L_10221b27;
            }
L_10221b3e: ;
            t17 = rd32(rd32(self + 0x38u) * 4u + rd32(self + 0x50u));
            wr32(self + 0x48u, t17);
        }
        t18 = rd32(self + 0x40u) - rd32(self + 0x3cu);
        t19 = rd32(self + 0x3cu);
        wr32(ebp + 0xcu, t18);
        eax = t19;
        edx = t18;
    }
    else
    {
        edx = t5;
        if ((int32_t)rd32(self + 0x40u) > (int32_t)rd32(self + 0x48u))
        {
            eax = rd32(self + 0x40u);
            ecx = rd32(self + 0x48u);
            wr32(self + 0x3cu, eax - ecx);
            eax = eax - ecx;
        }
        else
        {
            eax = rd32(self + 0x40u);
            wr32(self + 0x3cu, 0u);
        }
    }
    if ((int32_t)arg1 <= 0) goto L_10221b6e;
    if ((int32_t)arg1 > (int32_t)rd32(self + 0x30u)) goto L_10221b77;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t20 = cow_thiscall(g, COW_IMG(0x10221b90u), self, 1, arg1 - 1u);
    return t20;
L_10221b6e: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, COW_IMG(0x10221b90u), self, 1, 0u);
    eax = t21;
L_10221b77: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10221a80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
