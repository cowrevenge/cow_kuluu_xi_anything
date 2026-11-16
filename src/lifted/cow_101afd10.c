/* f_0x101afd10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101afd10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x1037c3dcu)) == arg1)
    {
        eax = rd32(COW_IMG(0x1037c3dcu));
        goto L_101afef5;
    }
    edi = COW_IMG(0x10662c40u);
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(COW_IMG(0x10662c4bu), 0x30u);
    wr8(COW_IMG(0x10662c42u), 0x31u);
    wr8(COW_IMG(0x10662c43u), 0x32u);
    wr8(COW_IMG(0x10662c44u), 0x33u);
    wr8(COW_IMG(0x10662c45u), 0x34u);
    wr8(COW_IMG(0x10662c46u), 0x35u);
    wr8(COW_IMG(0x10662c47u), 0x36u);
    wr8(COW_IMG(0x10662c48u), 0x37u);
    wr8(COW_IMG(0x10662c49u), 0x38u);
    wr8(COW_IMG(0x10662c4au), 0x39u);
    wr8(COW_IMG(0x10662c5eu), 0x41u);
    wr8(COW_IMG(0x10662c70u), 0x42u);
    wr8(COW_IMG(0x10662c6eu), 0x43u);
    wr8(COW_IMG(0x10662c60u), 0x44u);
    wr8(COW_IMG(0x10662c52u), 0x45u);
    wr8(COW_IMG(0x10662c61u), 0x46u);
    wr8(COW_IMG(0x10662c62u), 0x47u);
    wr8(COW_IMG(0x10662c63u), 0x48u);
    wr8(COW_IMG(0x10662c57u), 0x49u);
    wr8(COW_IMG(0x10662c64u), 0x4au);
    wr8(COW_IMG(0x10662c65u), 0x4bu);
    wr8(COW_IMG(0x10662c66u), 0x4cu);
    wr8(COW_IMG(0x10662c72u), 0x4du);
    wr8(COW_IMG(0x10662c71u), 0x4eu);
    wr8(COW_IMG(0x10662c58u), 0x4fu);
    wr8(COW_IMG(0x10662c59u), 0x50u);
    wr8(COW_IMG(0x10662c50u), 0x51u);
    wr8(COW_IMG(0x10662c53u), 0x52u);
    wr8(COW_IMG(0x10662c5fu), 0x53u);
    wr8(COW_IMG(0x10662c54u), 0x54u);
    wr8(COW_IMG(0x10662c56u), 0x55u);
    wr8(COW_IMG(0x10662c6fu), 0x56u);
    wr8(COW_IMG(0x10662c51u), 0x57u);
    wr8(COW_IMG(0x10662c6du), 0x58u);
    wr8(COW_IMG(0x10662c55u), 0x59u);
    wr8(COW_IMG(0x10662c6cu), 0x5au);
    wr8(COW_IMG(0x10662c4cu), 0x2du);
    wr8(COW_IMG(0x10662c73u), 0x2cu);
    wr8(COW_IMG(0x10662c74u), 0x2eu);
    wr8(COW_IMG(0x10662c5au), 0x5bu);
    wr8(COW_IMG(0x10662c5bu), 0x5du);
    wr8(COW_IMG(0x10662cd2u), 0x3au);
    wr8(COW_IMG(0x10662c67u), 0x3bu);
    wr8(COW_IMG(0x10662c6bu), 0x5cu);
    wr8(COW_IMG(0x10662cd0u), 0x5eu);
    wr8(COW_IMG(0x10662cd1u), 0x40u);
    wr8(COW_IMG(0x10662c4du), 0x3du);
    wr8(COW_IMG(0x10662c68u), 0x27u);
    wr8(COW_IMG(0x10662cbdu), 0xffu);
    if (arg1 == 2u) goto L_101afec5;
    ecx = (ecx & 0xffffff00u) | 0x32u;
    if (arg1 != 3u)
    {
        eax = arg1 - 3u;
        goto L_101afeef;
    }
    wr8(COW_IMG(0x10662d38u), 0xf8u);
    wr8(COW_IMG(0x10662d39u), 0x24u);
    wr8(COW_IMG(0x10662d3au), 0x2au);
    wr8(COW_IMG(0x10662d3bu), (uint8_t)ecx);
    wr8(COW_IMG(0x10662d3cu), 0x29u);
    wr8(COW_IMG(0x10662d3du), 0x21u);
    wr32(COW_IMG(0x1037c3dcu), arg1);
    return (arg1 - 3u & 0xffffff00u) | 1u;
L_101afec5: ;
    wr8(COW_IMG(0x10662d30u), 0xf0u);
    wr8(COW_IMG(0x10662d32u), 0xf2u);
    wr8(COW_IMG(0x10662d31u), 0xf1u);
    wr8(COW_IMG(0x10662d33u), 0xf3u);
    wr8(COW_IMG(0x10662c5au), 0x2bu);
    wr8(COW_IMG(0x10662c5bu), 0x23u);
    eax = arg1 - 2u;
L_101afeef: ;
    wr32(COW_IMG(0x1037c3dcu), arg1);
L_101afef5: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101afd10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101afd10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
