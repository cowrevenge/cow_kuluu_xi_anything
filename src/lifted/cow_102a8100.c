/* f_0x102a8100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a8100(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x638u);
    t2 = rd32(arg1 + 0x62cu);
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x102a81f0u), 3, arg1, COW_IMG(0x102a8270u), COW_IMG(0x102a83a0u));
    if ((uint8_t)t3 != 0u)
    {
        edi = t1 * t2;
        goto L_102a812d;
    }
    eax = t3;
    return eax;
L_102a812d: ;
    eax = 0xffu;
L_102a8139: ;
    wr8(COW_IMG(0x109a2896u) + eax * 8u, (uint8_t)eax);
    wr8(COW_IMG(0x109a2897u) + eax * 8u, (uint8_t)eax);
    wr16(COW_IMG(0x109a2894u) + eax * 8u, 1u);
    wr32(COW_IMG(0x109a2890u) + eax * 8u, 0u);
    if ((int32_t)(eax - 1u) >= 0)
    {
        eax = eax - 1u;
        goto L_102a8139;
    }
    if (rd8(rd32(arg1)) != 0u) goto L_102a8180;
    eax = rd32(arg1);
    if (!(rd8(eax + 1u) & 1u)) goto L_102a8180;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be4a0u), in_edi);
    wr32(COW_IMG(0x109a2870u), COW_IMG(0x102a8490u));
    return t4 & 0xffffff00u;
L_102a8180: ;
    wr32(COW_IMG(0x109a2880u), 0u);
    wr32(COW_IMG(0x109a2878u), 0u);
    wr32(COW_IMG(0x109aa894u), edi * 8u);
    wr16(COW_IMG(0x109aaab2u), 0x1feu);
    wr16(COW_IMG(0x109aaab0u), 9u);
    wr32(COW_IMG(0x109a2868u), 0x1ffu);
    wr32(COW_IMG(0x109a288cu), COW_IMG(0x109a30a0u));
    wr32(COW_IMG(0x109a287cu), COW_IMG(0x109a2888u));
    wr32(COW_IMG(0x109aaaacu), COW_IMG(0x109a3880u));
    wr32(COW_IMG(0x109a2870u), COW_IMG(0x102a8490u));
    return (edi * 8u & 0xffffff00u) | (uint8_t)(edi * 8u | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a8100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a8100(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
