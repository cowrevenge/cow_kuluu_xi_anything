/* f_0x100e81a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e81a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (uint32_t)(int16_t)rd16(arg1 * 2u + rd32(COW_IMG(0x104df770u)) + 0x832u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x82cu, t1);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x828u, arg2);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x3d4u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x3d4u);
        goto L_100e8216;
    }
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x3d4u);
    ecx = rd32(COW_IMG(0x104df770u));
    edx = t1;
    if (rd32(ecx + 0x5f0u) == 0u) goto L_100e8216;
    ecx = rd32(ecx + 0x5f0u);
    if (eax == 3u) goto L_100e8216;
    if (ecx == 3u) goto L_100e8216;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x100f12c0u), 4, 0xbu, COW_IMG(0x100e8220u), COW_IMG(0x100e82f0u), COW_IMG(0x100e8320u));
    t3 = g->ecx;
    t4 = g->edx;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x100f1340u), 4, t2, 0u, 0u, COW_IMG(0x100e8330u));
    return t5;
L_100e8216: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e81a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e81a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
