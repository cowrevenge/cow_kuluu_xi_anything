/* f_0x1015eac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1015eac0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(COW_IMG(0x10578460u)) != 0u)
    {
        eax = in_eax;
        ecx = rd32(COW_IMG(0x10578460u));
        edx = in_edx;
        goto L_1015eaf6;
    }
    ecx = rd32(COW_IMG(0x10578460u));
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x54cu, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u) goto L_1015eb1f;
    eax = t1;
    edx = t2;
    esi = t1;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x1014dd30u), esi, 0);
    t4 = g->edx;
    wr32(esi, COW_IMG(0x103352c8u));
    wr32(COW_IMG(0x10578460u), esi);
    eax = t3;
    ecx = esi;
    edx = t4;
L_1015eaf6: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x1014e620u), ecx, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1015e350u), self, 3, COW_IMG(0x103762c4u), 1u, 0u);
    t8 = g->edx;
    if (t7 != 0u) goto L_1015eb2e;
    edx = t8;
    if (rd32(COW_IMG(0x10578460u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578460u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
    }
L_1015eb1f: ;
    wr32(COW_IMG(0x10578460u), 0u);
    return 0u;
L_1015eb2e: ;
    return rd32(COW_IMG(0x10578460u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015eac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015eac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
