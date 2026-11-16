/* f_0x10149490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10149490(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_c;
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
    uint32_t t23;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->esi = self;
    g->edi = 0u;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x101f7020u), self, in_edx, 3, 0u, 0u, 1u);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(self + 0x5cu);
    wr32(self + 0x3cu, 0u);
    wr8(self + 0x44u, 0x20u);
    wr8(self + 0x45u, 0x18u);
    if (t3 == 0u)
    {
        eax = t3;
        ecx = t1;
        edx = t2;
    }
    else
    {
        eax = t3;
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(self + 0x5cu, 0u);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    if (rd32(self + 0x5cu) != 0u)
    {
        edi = 0u;
    }
    else
    {
        g->esp = sp0 - 4u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1f80u, in_ebx, in_edi);
        t8 = g->edx;
        if (t7 == 0u)
        {
            edx = t8;
            eax = 0u;
            edi = 0u;
        }
        else
        {
            eax = t7;
            edx = t8;
            ebx = t7;
            ebp = 0x60u;
            edi = ebx;
L_101494de: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
            t10 = g->edx;
            if (ebp != 1u)
            {
                eax = t9;
                edx = t10;
                ebp = ebp - 1u;
                edi = edi + 0x54u;
                goto L_101494de;
            }
            edx = t10;
            edi = edi + 0x54u;
            eax = ebx;
        }
        wr32(self + 0x5cu, eax);
    }
    t11 = rd8(self + 0x50u);
    wr8(self + 0x51u, 0u);
    if ((int8_t)t11 < 6)
    {
        eax = (eax & 0xffffff00u) | t11;
        goto L_10149531;
    }
    eax = (eax & 0xffffff00u) | t11;
    if ((uint8_t)eax == 0x1au) goto L_10149531;
    if ((uint32_t)(int8_t)eax + 0x1au == 0u)
    {
        edi = (uint32_t)(int8_t)eax + 0x1au;
        goto L_10149531;
    }
    ecx = (uint32_t)(int8_t)eax;
    edi = (uint32_t)(int8_t)eax + 0x1au;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x101491a0u), eax, self, g->edx, 0, 3, ecx, 0u, 1u);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_call_regs(g, COW_IMG(0x101491a0u), t12, self, g->edx, 0, 3, edi, 1u, 1u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    loc_c = 1u;
    loc_10 = 2u;
    loc_14 = edi + 0x20u;
    edi = edi + 0x20u;
L_10149539: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_call_regs(g, COW_IMG(0x101491a0u), eax, self, g->edx, 0, 3, loc_14, loc_10, loc_c);
    t17 = g->ecx;
    t18 = g->edx;
    if (rd8(self + 0x51u) == 0u)
    {
        eax = (t16 & 0xffffff00u) | rd8(self + 0x51u);
        edx = t18;
    }
    else
    {
        eax = (t16 & 0xffffff00u) | rd8(self + 0x51u);
        ecx = t17;
        t19 = (ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)eax;
        t20 = rd32(self + 0x5cu);
        g->esi = self;
        g->edi = edi;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t21 = cow_fastcall(g, COW_IMG(0x101f7020u), self, t20, 3, t20, t19, 1u);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    }
    if ((int8_t)rd8(self + 0x53u) > 0)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x53u);
        t23 = (uint32_t)(int8_t)eax - 1u;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x101f7080u), t23, self, edx, 0, 2, t23, 0u);
    }
    wr8(self + 0x53u, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10149531: ;
    loc_c = 0u;
    loc_10 = 0u;
    loc_14 = (uint32_t)(int8_t)eax;
    eax = (uint32_t)(int8_t)eax;
    goto L_10149539;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10149490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10149490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
