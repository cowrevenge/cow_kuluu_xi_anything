/* f_0x10233060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10233060(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)rd8(COW_IMG(0x10386998u) + arg1 * 4u) < 0)
    {
        eax = (arg1 & 0xffffff00u) | rd8(COW_IMG(0x10386998u) + arg1 * 4u);
        goto L_1023309e;
    }
    eax = (arg1 & 0xffffff00u) | rd8(COW_IMG(0x10386998u) + arg1 * 4u);
    pf = PARITY(rd8(COW_IMG(0x10386998u) + arg1 * 4u));
    zf = rd8(COW_IMG(0x10386998u) + arg1 * 4u) == 0u;
    sf = (int8_t)rd8(COW_IMG(0x10386998u) + arg1 * 4u) < 0;
    t1 = COW_IMG(0x10386998u) + arg1 * 4u;
    edx = t1;
    esi = rd32(rd32(COW_IMG(0x10456a28u)) + 0x14u);
    edi = rd32(COW_IMG(0x10456a28u));
L_10233083: ;
    if ((1u << (eax & 0x1fu) & esi) == 0u)
    {
        eax = 1u << (eax & 0x1fu);
        goto L_10233096;
    }
    eax = 1u << (eax & 0x1fu);
    if ((rd32(edi + 0x10u) & eax) != 0u) goto L_102330a3;
L_10233096: ;
    if ((int8_t)rd8(edx + 1u) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(edx + 1u);
        pf = PARITY(rd8(edx + 1u));
        zf = rd8(edx + 1u) == 0u;
        sf = (int8_t)rd8(edx + 1u) < 0;
        edx = edx + 1u;
        goto L_10233083;
    }
    eax = (eax & 0xffffff00u) | rd8(edx + 1u);
L_1023309e: ;
    return eax & 0xffffff00u;
L_102330a3: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10233060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10233060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
