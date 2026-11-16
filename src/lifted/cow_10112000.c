/* f_0x10112000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10112000(Guest* g)
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0x18u);
    wr32(self, COW_IMG(0x10332ed8u));
    wr32(t1 + 8u, 0u);
    if (rd8(self + 4u) == 0u)
    {
        if (rd32(self + 0x10u) == 0u) goto L_1011202b;
        eax = rd32(self + 0x10u);
L_10112022: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_10112022;
        }
    }
L_1011202b: ;
    if (rd32(self + 0x10u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_1011206b;
    }
    ecx = self;
    edx = in_edx;
    esi = rd32(self + 0x10u);
L_10112033: ;
    t2 = rd32(esi + 8u);
    wr32(esi + 8u, 0u);
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
        edi = t2;
    }
    else
    {
        eax = rd32(esi);
        edi = t2;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    t5 = rd32(esi + 8u);
    wr32(esi, 0xefefefefu);
    if (t5 == 0u)
    {
        ecx = t5;
    }
    else
    {
        ecx = t5;
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = self;
        g->esp = sp0 - 0x10u;
        t6 = cow_fastcall(g, COW_IMG(0x10112240u), ecx, edx, 1, 1u);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
    t9 = g->ecx;
    t10 = g->edx;
    if (edi != 0u)
    {
        ecx = t9;
        edx = t10;
        esi = edi;
        goto L_10112033;
    }
    ecx = t9;
    edx = t10;
L_1011206b: ;
    wr32(self + 0x10u, self + 0x14u);
    wr32(self + 0x18u, self + 8u);
    wr16(self + 6u, 0u);
    wr32(self + 0x10u, 0u);
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
    }
    else
    {
        eax = rd32(self + 0x14u);
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t11 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    wr32(self + 0x14u, 0xefefefefu);
    if (rd32(self + 0x1cu) != 0u)
    {
        esi = rd32(self + 0x1cu);
        g->ebx = 0u;
        g->edi = self + 8u;
        g->ebp = self;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t14 = cow_fastcall(g, COW_IMG(0x10112150u), esi, edx, 0);
        t15 = g->ecx;
        t16 = g->edx;
        g->ecx = t15;
        g->edx = t16;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
    }
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t19 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t20 = g->ecx;
        t21 = g->edx;
        eax = t19;
        ecx = t20;
        edx = t21;
    }
    wr32(self + 8u, 0xefefefefu);
    if (rd32(self + 0x10u) != 0u)
    {
        edi = rd32(self + 0x10u);
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = self;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t22 = cow_fastcall(g, COW_IMG(0x10112150u), edi, edx, 0);
        t23 = g->ecx;
        t24 = g->edx;
        g->ecx = t23;
        g->edx = t24;
        t25 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
        t26 = g->ecx;
        t27 = g->edx;
        eax = t25;
        ecx = t26;
        edx = t27;
    }
    if (arg1 & 1u)
    {
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, self);
        t28 = g->edx;
        edx = t28;
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10112000(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
