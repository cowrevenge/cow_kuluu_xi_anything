/* f_0x10108a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10108a50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(arg1, 0u);
    wr16(arg1 + 0xau, 0u);
    wr16(arg1 + 8u, 0u);
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101088a0u), self, 1, arg1);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10108aa0;
    }
    eax = t1;
    edx = t2;
    esi = t1;
    if (rd32(esi) != 0u) goto L_10108aa0;
    t3 = rd16(edx + 6u);
    wr16(esi + 6u, (uint16_t)(t3 + rd16(esi + 6u)));
    g->eax = (eax & 0xffff0000u) | t3;
    g->edx = edx;
    t4 = rd16(esi + 6u);
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x10108870u), self, 1, esi);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
        ebx = esi;
        ebp = t4;
    }
    else
    {
        eax = t5;
        edx = t6;
        ebx = esi;
        ebp = t4;
        wr16(eax + 4u, (uint16_t)ebp);
    }
    g->ebx = ebx;
    g->ebp = ebp;
    g->esp = sp0 - 0x10u;
    t7 = cow_call_regs(g, COW_IMG(0x10108780u), eax, self, edx, 0, 1, esi);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_10108aaa: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x10108870u), self, 1, ebx);
    t12 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        edx = t12;
    }
    else
    {
        eax = t11;
        edx = t12;
        esi = t11;
        if (rd32(esi) == 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t13 = cow_call_regs(g, COW_IMG(0x10108d80u), eax, self, g->edx, 0, 1, esi);
            t14 = g->ecx;
            t15 = g->edx;
            wr16(ebx + 6u, (uint16_t)(rd16(ebx + 6u) + rd16(esi + 6u)));
            g->edx = t15;
            t16 = rd16(ebx + 6u);
            t17 = cow_thiscall(g, COW_IMG(0x10108870u), self, 1, esi);
            t18 = g->edx;
            if (t17 == 0u)
            {
                eax = t17;
                edx = t18;
                ebp = (ebp & 0xffff0000u) | t16;
            }
            else
            {
                eax = t17;
                edx = t18;
                ebp = (ebp & 0xffff0000u) | t16;
                wr16(eax + 4u, (uint16_t)ebp);
            }
            g->ebx = ebx;
            g->ebp = ebp;
            g->esp = sp0 - 0x10u;
            t19 = cow_call_regs(g, COW_IMG(0x10108780u), eax, self, edx, 0, 1, ebx);
            t20 = g->edx;
            eax = t19;
            edx = t20;
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t21 = cow_fastcall(g, COW_IMG(0x101088c0u), self, edx, 0);
    t22 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t22;
    return t21;
L_10108aa0: ;
    wr32(edx, 0u);
    g->edi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x10108700u), self, 1, edx);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    ebx = arg1;
    ebp = 0u;
    goto L_10108aaa;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10108a50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
