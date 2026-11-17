/* f_0x10212580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10212580(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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

    wr32(self, COW_IMG(0x1033bcecu));
    if (rd32(self + 0xcu) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 0xcu);
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(self + 0xcu, 0u);
        eax = t2;
        edx = t3;
    }
    ebx = 0x1fu;
    esi = self + 0x10u;
L_102125a6: ;
    if (rd32(esi) != 0u)
    {
        ecx = rd32(esi);
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(esi, 0u);
        eax = t5;
        edx = t6;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        goto L_102125a6;
    }
    ebx = 0x1fu;
    esi = self + 0x8cu;
L_102125c5: ;
    if (rd32(esi) != 0u)
    {
        ecx = rd32(esi);
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(esi, 0u);
        eax = t8;
        edx = t9;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        goto L_102125c5;
    }
    if (rd32(self + 0x108u) != 0u)
    {
        ecx = rd32(self + 0x108u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 8u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(self + 0x108u, 0u);
        eax = t11;
        edx = t12;
    }
    if (rd32(self + 0x10cu) != 0u)
    {
        g->esp = sp0 - 8u;
        t13 = cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    g->edx = edx;
    t15 = rd32(COW_IMG(0x10662da0u));
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101c6870u), t15, 1, 0u);
    t16 = g->ecx;
    t17 = g->edx;
    t18 = rd32(self + 0x140u);
    wr32(self + 0x10cu, 0u);
    if (t18 != 0u)
    {
        eax = t18;
        ecx = t16;
        edx = t17;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        wr32(self + 0x140u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10212580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10212580(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
