/* f_0x100e7a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e7a50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;

    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x128u) == 0u)
    {
        ecx = rd32(COW_IMG(0x104df770u));
        edx = rd32(rd32(COW_IMG(0x104df770u)) + 0x128u);
        goto L_100e7a8d;
    }
    ecx = rd32(COW_IMG(0x104df770u));
    edx = rd32(rd32(COW_IMG(0x104df770u)) + 0x128u);
    if (edx == 1u)
    {
        eax = 0u;
        edx = edx - 1u;
        goto L_100e7ab8;
    }
    edx = edx - 1u;
    if (edx != 1u)
    {
        eax = 0u;
        goto L_100e7af6;
    }
    if (rd32(ecx + 0x12cu) == 0u)
    {
        eax = rd32(ecx + 0x12cu);
        goto L_100e7af6;
    }
    eax = rd32(ecx + 0x12cu);
    wr32(ecx + 0x128u, 0u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x12cu, 0u);
    return eax;
L_100e7a8d: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100f1410u), 1, 2u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_100e7aa0;
    }
    eax = t1;
    return 0xffffffffu;
L_100e7aa0: ;
    t3 = rd32(rd32(COW_IMG(0x104df770u)) + 0x128u) + 1u;
    t4 = rd32(COW_IMG(0x104df770u));
    wr32(t4 + 0x128u, t3);
    eax = t4;
    ecx = rd32(COW_IMG(0x104df770u));
L_100e7ab8: ;
    wr32(ecx + 0x12cu, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x100f1510u), 1, 2u);
    t6 = g->ecx;
    t7 = g->edx;
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x100f1340u), 4, t5, 0u, 0u, COW_IMG(0x100e7b00u));
    if ((int32_t)t8 >= 0)
    {
        eax = t8;
        goto L_100e7aea;
    }
    eax = t8;
    wr32(rd32(COW_IMG(0x104df770u)) + 0x128u, 0u);
    return eax;
L_100e7aea: ;
    wr32(rd32(COW_IMG(0x104df770u)) + 0x128u, rd32(rd32(COW_IMG(0x104df770u)) + 0x128u) + 1u);
L_100e7af6: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e7a50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
