/* f_0x10108780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10108780(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(arg1 + 8u) == 0u)
    {
        ebp = 0u;
    }
    else
    {
        ebp = (in_ebp & 0xffff0000u) | rd16(arg1 + 8u);
        ebp = self + (uint16_t)ebp;
    }
    if (rd16(arg1 + 0xau) == 0u)
    {
        eax = in_eax;
        goto L_101087ef;
    }
    ebx = (in_ebx & 0xffff0000u) | rd16(arg1 + 0xau);
    if (self + (uint16_t)ebx == 0u)
    {
        eax = in_eax;
        goto L_101087ef;
    }
    ebx = self + (uint16_t)ebx;
    if (rd16(ebx + 6u) >= rd16(arg1 + 6u))
    {
        eax = (in_eax & 0xffff0000u) | rd16(ebx + 6u);
        goto L_101087ef;
    }
    eax = (in_eax & 0xffff0000u) | rd16(ebx + 6u);
    edx = in_edx;
L_101087be: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10108d80u), eax, self, g->edx, 0, 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_call_regs(g, COW_IMG(0x10108e80u), t1, self, g->edx, 0, 2, arg1, ebx);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd16(arg1 + 0xau) == 0u)
    {
        eax = (t3 & 0xffff0000u) | rd16(arg1 + 0xau);
        ecx = t4;
        edx = t5;
        goto L_10108843;
    }
    eax = (t3 & 0xffff0000u) | rd16(arg1 + 0xau);
    ecx = t4;
    edx = t5;
    t6 = self + (uint16_t)eax;
    if (self + (uint16_t)eax == 0u)
    {
        eax = t6;
        goto L_10108843;
    }
    eax = t6;
    ebx = t6;
    if (rd16(ebx + 6u) < rd16(arg1 + 6u)) goto L_101087be;
    ecx = (ecx & 0xffff0000u) | rd16(ebx + 6u);
L_10108843: ;
    if (rd16(arg1 + 0xau) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 0xau);
        goto L_10108857;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1 + 0xau);
    if (self + (uint16_t)eax != 0u)
    {
        eax = self + (uint16_t)eax;
        goto L_1010885f;
    }
    eax = self + (uint16_t)eax;
L_10108857: ;
    wr16(self + 8u, rd16(arg1 + 6u));
L_1010885f: ;
    g->edx = edx;
    return eax;
L_101087ef: ;
    if (ebp == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        if (rd16(ebp + 6u) <= rd16(arg1 + 6u))
        {
            ecx = self;
            edx = (in_edx & 0xffff0000u) | rd16(ebp + 6u);
            goto L_10108843;
        }
        edx = (in_edx & 0xffff0000u) | rd16(ebp + 6u);
L_101087fd: ;
        if (rd16(ebp + 8u) == 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(ebp + 8u);
            goto L_10108811;
        }
        eax = (eax & 0xffff0000u) | rd16(ebp + 8u);
        if (self + (uint16_t)eax != 0u)
        {
            eax = self + (uint16_t)eax;
            goto L_10108814;
        }
        eax = self + (uint16_t)eax;
L_10108811: ;
        wr32(self + 0x10u, arg1);
L_10108814: ;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_call_regs(g, COW_IMG(0x10108d80u), eax, self, g->edx, 0, 1, arg1);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_call_regs(g, COW_IMG(0x10108f40u), t7, self, g->edx, 0, 2, arg1, ebp);
        t10 = g->ecx;
        t11 = g->edx;
        if (rd16(arg1 + 8u) == 0u)
        {
            eax = (t9 & 0xffff0000u) | rd16(arg1 + 8u);
            ecx = t10;
            edx = t11;
            goto L_10108843;
        }
        eax = (t9 & 0xffff0000u) | rd16(arg1 + 8u);
        ecx = t10;
        edx = t11;
        t12 = self + (uint16_t)eax;
        if (self + (uint16_t)eax == 0u)
        {
            eax = t12;
            goto L_10108843;
        }
        eax = t12;
        ebp = t12;
        if (rd16(ebp + 6u) > rd16(arg1 + 6u))
        {
            eax = (eax & 0xffff0000u) | rd16(ebp + 6u);
            goto L_101087fd;
        }
        eax = (eax & 0xffff0000u) | rd16(ebp + 6u);
    }
    goto L_10108843;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10108780(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
