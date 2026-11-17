/* f_0x100f2190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f2190(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    eax = in_eax;
    edx = in_edx;
    ebp = 0u;
L_100f219d: ;
    if (rd32(self + 0x1cu) == 0u)
    {
        ecx = rd32(self + 0x1cu);
        goto L_100f21b5;
    }
    ecx = rd32(self + 0x1cu);
L_100f21a4: ;
    if (rd16(ecx + 0x1058u) == 0u) goto L_100f2216;
    if (rd32(ecx + 4u) != 0u)
    {
        ecx = rd32(ecx + 4u);
        goto L_100f21a4;
    }
    ecx = rd32(ecx + 4u);
L_100f21b5: ;
    if (rd16(self + 0x18u) >= 0x1eu) goto L_100f2237;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1060u, in_edi, in_esi);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_100f2237;
    }
    eax = t4;
    edx = t5;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x100f29e0u), eax, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        goto L_100f2237;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    edi = t6;
    wr16(self + 8u, (uint16_t)(rd16(self + 8u) + 1u));
    if (rd16(self + 8u) == 0u)
    {
        wr16(self + 8u, 1u);
    }
    t9 = (ecx & 0xffff0000u) | rd16(self + 8u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x100f33d0u), edi, 3, self, t9, ebp);
    if (t10 != 0u)
    {
        eax = t10;
        goto L_100f2237;
    }
    eax = t10;
    t11 = rd32(self + 0x1cu);
    wr16(self + 0x18u, (uint16_t)(rd16(self + 0x18u) + 1u));
    wr32(edi + 4u, t11);
    wr32(self + 0x1cu, edi);
    edx = t11;
L_100f2208: ;
    if ((uint16_t)(ebp + 1u) < 2u)
    {
        ebp = ebp + 1u;
        goto L_100f219d;
    }
    return (eax & 0xffffff00u) | 1u;
L_100f2216: ;
    wr16(self + 8u, (uint16_t)(rd16(self + 8u) + 1u));
    if (rd16(self + 8u) == 0u)
    {
        wr16(self + 8u, 1u);
    }
    t1 = (eax & 0xffff0000u) | rd16(self + 8u);
    g->eax = t1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x100f33d0u), ecx, 3, self, t1, ebp);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        goto L_100f2237;
    }
    eax = t2;
    edx = t3;
    goto L_100f2208;
L_100f2237: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f2190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f2190(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
