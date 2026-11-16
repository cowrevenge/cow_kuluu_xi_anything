/* f_0x100eb570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100eb570(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;

    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19304u) == 0u) goto L_100eb5b6;
    eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19304u);
    edx = rd32(COW_IMG(0x104dfd98u));
    if (rd32(edx + 0x19300u) >= 0x51u) goto L_100eb5ac;
    ecx = rd32(edx + 0x19300u);
L_100eb58b: ;
    if (rd16(eax) != 0u) goto L_100eb5b9;
    wr32(edx + 0x19300u, ecx + 1u);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19300u) < 0x51u)
    {
        eax = eax + 0x2cu;
        ecx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19300u);
        edx = rd32(COW_IMG(0x104dfd98u));
        goto L_100eb58b;
    }
    edx = rd32(COW_IMG(0x104dfd98u));
L_100eb5ac: ;
    wr32(edx + 0x19304u, 0u);
L_100eb5b6: ;
    return 0u;
L_100eb5b9: ;
    t1 = rd32(edx + 0x19300u) + 1u;
    wr32(edx + 0x19300u, t1);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19304u, eax + 0x2cu);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eb570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100eb570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
