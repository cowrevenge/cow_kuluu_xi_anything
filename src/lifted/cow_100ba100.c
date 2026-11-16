/* f_0x100ba100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ba100(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        if (eax == 2u) goto L_100ba11d;
        if (eax != 3u) goto L_100ba122;
L_100ba11d: ;
        eax = 1u;
    }
L_100ba122: ;
    if (eax == 1u) goto L_100ba175;
    eax = eax - 1u;
    if (eax == 1u) goto L_100ba15c;
    eax = eax - 1u;
    if (eax == 1u) goto L_100ba143;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 1u, 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    return;
L_100ba143: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 1u, 4u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    return;
L_100ba15c: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 1u, 3u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    return;
L_100ba175: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 1u, 2u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ba100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ba100(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
