/* f_0x100a9610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a9610(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0x38u);
    wr32(self, COW_IMG(0x1032e7c0u));
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        esi = t1;
        if (rd32(esi + 0x20u) == 0u)
        {
            eax = in_eax;
            edx = in_edx;
        }
        else
        {
            ecx = rd32(esi + 0x20u);
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t2 = cow_thiscall(g, COW_IMG(0x1018c890u), ecx, 0);
            t3 = g->edx;
            if (t2 == 0u)
            {
                edx = t3;
            }
            else
            {
                eax = t2;
                edx = t3;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x100a4160u), eax, eax, g->edx, 1, 0);
                t4 = g->edx;
                edx = t4;
            }
            edi = 0u;
L_100a963b: ;
            if (rd32(esi + 0x20u) == 0u)
            {
                ecx = rd32(esi + 0x20u);
                eax = (uint32_t)(int16_t)rd16(esi + 0x24u);
            }
            else
            {
                ecx = rd32(esi + 0x20u);
                eax = (uint32_t)(int16_t)rd16(rd32(ecx + 0xcu) + 0x1eu);
            }
            if ((int32_t)edi >= (int32_t)eax) goto L_100a9667;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t5 = cow_thiscall(g, COW_IMG(0x1018c8c0u), ecx, 1, edi);
            t6 = g->edx;
            if (t5 == 0u)
            {
                edx = t6;
            }
            else
            {
                eax = t5;
                edx = t6;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x100a4160u), eax, eax, g->edx, 1, 0);
                t7 = g->edx;
                edx = t7;
            }
            edi = edi + 1u;
            goto L_100a963b;
        }
L_100a9667: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t8 = cow_thiscall(g, COW_IMG(0x100814e0u), esi + 0x14u, 0);
        t9 = g->edx;
        g->edx = t9;
        t10 = cow_thiscall(g, COW_IMG(0x100814e0u), esi + 8u, 0);
        t11 = g->ecx;
        t12 = g->edx;
        t13 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t11, t12, 1, 1, esi);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x1018cea0u), eax, rd32(self + 0x34u), g->edx, 1, 0);
    t16 = g->edx;
    t17 = cow_fastcall(g, COW_IMG(0x100747c0u), self, t16, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (!(arg1 & 1u))
    {
        edx = t19;
    }
    else
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
        t20 = g->edx;
        edx = t20;
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a9610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a9610(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
