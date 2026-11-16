/* f_0x1010e7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1010e7c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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

    if (rd32(self) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        esi = rd32(self);
        t1 = rd32(esi + 0x20u);
        wr32(esi + 8u, COW_IMG(0x10332e88u));
        wr32(t1 + 8u, 0u);
        if (rd8(esi + 0xcu) != 0u)
        {
            eax = (t1 & 0xffffff00u) | rd8(esi + 0xcu);
        }
        else
        {
            if (rd32(esi + 0x18u) == 0u)
            {
                eax = rd32(esi + 0x18u);
                goto L_1010e7f7;
            }
            eax = rd32(esi + 0x18u);
L_1010e7ee: ;
            wr32(eax, 0u);
            if (rd32(eax + 8u) != 0u)
            {
                eax = rd32(eax + 8u);
                goto L_1010e7ee;
            }
            eax = rd32(eax + 8u);
        }
L_1010e7f7: ;
        if (rd32(esi + 0x18u) == 0u)
        {
            edx = in_edx;
            goto L_1010e81c;
        }
        edx = in_edx;
        edi = rd32(esi + 0x18u);
L_1010e800: ;
        t2 = rd32(edi + 8u);
        wr32(edi + 8u, 0u);
        g->ebx = 0u;
        g->ebp = t2;
        g->esp = sp0 - 0x14u;
        t3 = cow_call_regs(g, COW_IMG(0x1010e730u), eax, edi, edx, 1, 0);
        t4 = g->ecx;
        t5 = g->edx;
        g->edx = t5;
        t6 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
        t7 = g->edx;
        if (t2 != 0u)
        {
            eax = t6;
            edx = t7;
            edi = t2;
            goto L_1010e800;
        }
        eax = t6;
        edx = t7;
L_1010e81c: ;
        wr32(esi + 0x18u, esi + 0x1cu);
        wr32(esi + 0x20u, esi + 0x10u);
        wr16(esi + 0xeu, 0u);
        wr32(esi + 0x18u, 0u);
        if (rd32(esi + 0x1cu) == 0u)
        {
            ebp = esi + 0x10u;
            edi = esi + 0x1cu;
        }
        else
        {
            ecx = rd32(esi + 0x1cu);
            ebp = esi + 0x10u;
            edi = esi + 0x1cu;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t8 = cow_thiscall(g, COW_IMG(0x1010e8b0u), ecx, 1, 1u);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
        t10 = rd32(edi + 8u);
        wr32(edi, 0xefefefefu);
        if (t10 != 0u)
        {
            ecx = t10;
            g->ebx = 0u;
            g->ebp = ebp;
            g->esp = sp0 - 0x14u;
            t11 = cow_call_regs(g, COW_IMG(0x1010e370u), eax, ecx, edx, 0, 1, 1u);
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
        if (rd32(ebp) != 0u)
        {
            ecx = rd32(ebp);
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t13 = cow_thiscall(g, COW_IMG(0x1010e8b0u), ecx, 1, 1u);
            t14 = g->edx;
            eax = t13;
            edx = t14;
        }
        t15 = rd32(ebp + 8u);
        wr32(ebp, 0xefefefefu);
        if (t15 == 0u)
        {
            ecx = t15;
        }
        else
        {
            ecx = t15;
            g->ebx = 0u;
            g->ebp = in_ebp;
            g->esp = sp0 - 0xcu;
            t16 = cow_call_regs(g, COW_IMG(0x1010e370u), eax, ecx, edx, 0, 1, 1u);
            t17 = g->ecx;
            t18 = g->edx;
            eax = t16;
            ecx = t17;
            edx = t18;
        }
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t19 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    t21 = rd32(self + 8u);
    wr32(self, 0xefefefefu);
    if (t21 != 0u)
    {
        esi = t21;
        g->ebp = in_ebp;
        g->esp = sp0 - 0xcu;
        t22 = cow_call_regs(g, COW_IMG(0x1010e7c0u), eax, esi, edx, 1, 0);
        t23 = g->ecx;
        t24 = g->edx;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
    }
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010e7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010e7c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
