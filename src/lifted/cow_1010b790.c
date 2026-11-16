/* f_0x1010b790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010b790(Guest* g)
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
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
    wr32(self, COW_IMG(0x10332e54u));
    wr32(t1 + 8u, 0u);
    if (rd8(self + 4u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 4u);
    }
    else
    {
        if (rd32(self + 0x10u) == 0u)
        {
            eax = rd32(self + 0x10u);
            goto L_1010b7bb;
        }
        eax = rd32(self + 0x10u);
L_1010b7b2: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_1010b7b2;
        }
        eax = rd32(eax + 8u);
    }
L_1010b7bb: ;
    if (rd32(self + 0x10u) == 0u)
    {
        edx = in_edx;
        goto L_1010b7f8;
    }
    edx = in_edx;
    esi = rd32(self + 0x10u);
L_1010b7c3: ;
    t2 = rd32(esi + 8u);
    wr32(esi + 8u, 0u);
    if (rd32(esi) == 0u)
    {
        edi = t2;
    }
    else
    {
        ecx = rd32(esi);
        edi = t2;
        g->eax = eax;
        g->edx = rd32(ecx);
        t3 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t4 = cow_thiscall(g, rd32(t3), ecx, 1, 1u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    t6 = rd32(esi + 8u);
    wr32(esi, 0xefefefefu);
    if (t6 == 0u)
    {
        ecx = t6;
    }
    else
    {
        ecx = t6;
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = self;
        g->esp = sp0 - 0x10u;
        t7 = cow_call_regs(g, COW_IMG(0x1010bb20u), eax, ecx, edx, 0, 1, 1u);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
    t11 = g->edx;
    if (edi != 0u)
    {
        eax = t10;
        edx = t11;
        esi = edi;
        goto L_1010b7c3;
    }
    eax = t10;
    edx = t11;
L_1010b7f8: ;
    wr32(self + 0x10u, self + 0x14u);
    wr32(self + 0x18u, self + 8u);
    wr16(self + 6u, 0u);
    wr32(self + 0x10u, 0u);
    if (rd32(self + 0x14u) != 0u)
    {
        ecx = rd32(self + 0x14u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t12 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t13 = cow_thiscall(g, rd32(t12), ecx, 1, 1u);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    wr32(self + 0x14u, 0xefefefefu);
    if (rd32(self + 0x1cu) != 0u)
    {
        esi = rd32(self + 0x1cu);
        g->ebx = 0u;
        g->edi = self + 8u;
        g->ebp = self;
        g->esp = sp0 - 0x10u;
        t15 = cow_call_regs(g, COW_IMG(0x1010ba60u), eax, esi, edx, 1, 0);
        t16 = g->ecx;
        t17 = g->edx;
        g->edx = t17;
        t18 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    if (rd32(self + 8u) == 0u)
    {
        ecx = rd32(self + 8u);
    }
    else
    {
        ecx = rd32(self + 8u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t20 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t21 = cow_thiscall(g, rd32(t20), ecx, 1, 1u);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    }
    wr32(self + 8u, 0xefefefefu);
    if (rd32(self + 0x10u) != 0u)
    {
        edi = rd32(self + 0x10u);
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = self;
        g->esp = sp0 - 0xcu;
        t24 = cow_call_regs(g, COW_IMG(0x1010ba60u), eax, edi, edx, 1, 0);
        t25 = g->ecx;
        t26 = g->edx;
        g->ecx = t25;
        g->edx = t26;
        t27 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
        t28 = g->ecx;
        t29 = g->edx;
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    if (arg1 & 1u)
    {
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, self);
        t30 = g->edx;
        edx = t30;
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010b790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010b790(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
