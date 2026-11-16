/* f_0x1010cf30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1010cf30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(self + 0x3cu);
    wr32(self + 0x24u, COW_IMG(0x10332e8cu));
    wr32(t1 + 8u, 0u);
    if (rd8(self + 0x28u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 0x28u);
    }
    else
    {
        if (rd32(self + 0x34u) == 0u)
        {
            eax = rd32(self + 0x34u);
            goto L_1010cf5d;
        }
        eax = rd32(self + 0x34u);
L_1010cf54: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_1010cf54;
        }
        eax = rd32(eax + 8u);
    }
L_1010cf5d: ;
    if (rd32(self + 0x34u) == 0u)
    {
        edx = in_edx;
        goto L_1010cf80;
    }
    edx = in_edx;
    edi = rd32(self + 0x34u);
L_1010cf64: ;
    t2 = rd32(edi + 8u);
    wr32(edi + 8u, 0u);
    g->edi = edi;
    g->ebp = t2;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x1010e7c0u), eax, edi, edx, 1, 5, in_edi, in_esi, in_ebp, in_ebx, self);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 0x14u;
    t6 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
    t7 = g->edx;
    if (t2 != 0u)
    {
        eax = t6;
        edx = t7;
        edi = t2;
        goto L_1010cf64;
    }
    edx = t7;
L_1010cf80: ;
    wr32(self + 0x34u, self + 0x38u);
    wr32(self + 0x3cu, self + 0x2cu);
    wr16(self + 0x2au, 0u);
    wr32(self + 0x34u, 0u);
    t8 = rd32(self + 0x38u);
    if (rd32(self + 0x38u) == 0u)
    {
        eax = t8;
    }
    else
    {
        eax = t8;
        loc_4 = t8;
        g->ebx = 0u;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t9 = cow_fastcall(g, COW_IMG(0x1010e0d0u), eax + 8u, edx, 0);
        t10 = g->edx;
        g->edx = t10;
        t11 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, loc_4);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    wr32(self + 0x38u, 0xefefefefu);
    if (rd32(self + 0x40u) != 0u)
    {
        edi = rd32(self + 0x40u);
        g->ebx = 0u;
        g->esi = self;
        g->ebp = self + 0x2cu;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t13 = cow_fastcall(g, COW_IMG(0x1010e530u), edi, edx, 1, 1u);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    if (rd32(self + 0x2cu) != 0u)
    {
        ecx = rd32(self + 0x2cu);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t15 = cow_fastcall(g, COW_IMG(0x1010e8e0u), ecx, edx, 1, 1u);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    wr32(self + 0x2cu, 0xefefefefu);
    if (rd32(self + 0x34u) != 0u)
    {
        ebp = rd32(self + 0x34u);
        g->ebx = 0u;
        g->esi = self;
        g->ebp = ebp;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t17 = cow_fastcall(g, COW_IMG(0x1010e530u), ebp, edx, 1, 1u);
        eax = t17;
    }
    t18 = rd32(self + 0x1cu);
    wr32(self + 4u, COW_IMG(0x10332e88u));
    wr32(t18 + 8u, 0u);
    if (rd8(self + 8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 8u);
        edx = t18;
    }
    else
    {
        edx = t18;
        if (rd32(self + 0x14u) == 0u)
        {
            eax = rd32(self + 0x14u);
            goto L_1010d011;
        }
        eax = rd32(self + 0x14u);
L_1010d008: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_1010d008;
        }
        eax = rd32(eax + 8u);
    }
L_1010d011: ;
    if (rd32(self + 0x14u) == 0u) goto L_1010d034;
    edi = rd32(self + 0x14u);
L_1010d018: ;
    t19 = rd32(edi + 8u);
    wr32(edi + 8u, 0u);
    g->ebx = 0u;
    g->ebp = t19;
    g->esp = sp0 - 0x14u;
    t20 = cow_call_regs(g, COW_IMG(0x1010e730u), eax, edi, edx, 1, 0);
    t21 = g->ecx;
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
    t24 = g->edx;
    if (t19 != 0u)
    {
        eax = t23;
        edx = t24;
        edi = t19;
        goto L_1010d018;
    }
    eax = t23;
    edx = t24;
L_1010d034: ;
    wr32(self + 0x14u, self + 0x18u);
    wr32(self + 0x1cu, self + 0xcu);
    wr16(self + 0xau, 0u);
    wr32(self + 0x14u, 0u);
    if (rd32(self + 0x18u) != 0u)
    {
        esi = rd32(self + 0x18u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t25 = cow_thiscall(g, COW_IMG(0x1010ea00u), esi, 0);
        t26 = g->ecx;
        t27 = g->edx;
        g->edx = t27;
        t28 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    }
    wr32(self + 0x18u, 0xefefefefu);
    if (rd32(self + 0x20u) != 0u)
    {
        edi = rd32(self + 0x20u);
        g->ebx = 0u;
        g->ebp = self + 0xcu;
        g->esp = sp0 - 0x14u;
        t30 = cow_call_regs(g, COW_IMG(0x1010e370u), eax, edi, edx, 0, 1, 1u);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1010e730u), eax, self + 0xcu, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010cf30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010cf30(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
