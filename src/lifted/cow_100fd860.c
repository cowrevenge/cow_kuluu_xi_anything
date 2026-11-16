/* f_0x100fd860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_100fd860(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t sf;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        sf = (int8_t)rd8(arg1) < 0;
        goto L_100fd86e;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1);
L_100fd86a: ;
    return eax & 0xffff0000u;
L_100fd86e: ;
    if (!sf) goto L_100fd8ca;
    if ((uint8_t)eax < 0xa1u) goto L_100fd878;
    if ((uint8_t)eax <= 0xdfu) goto L_100fd8ca;
L_100fd878: ;
    if ((uint8_t)eax != 0xfdu) goto L_100fd8a2;
    if (rd8(arg1 + 1u) == 0u) goto L_100fd8a2;
    edx = (in_edx & 0xffffff00u) | rd8(arg1 + 1u);
    if (rd8(arg1 + 2u) == 0u) goto L_100fd8a2;
    edx = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    if (rd8(arg1 + 3u) == 0u) goto L_100fd8a2;
    edx = (edx & 0xffffff00u) | rd8(arg1 + 3u);
    if (rd8(arg1 + 4u) == 0u) goto L_100fd8a2;
    if (rd8(arg1 + 5u) != (uint8_t)eax) goto L_100fd8a2;
    return (eax & 0xffff0000u) | 6u;
L_100fd8a2: ;
    if ((uint8_t)eax < 0x81u) goto L_100fd8aa;
    if ((uint8_t)eax <= 0x9fu) goto L_100fd8b2;
L_100fd8aa: ;
    if ((uint8_t)eax < 0xe0u) goto L_100fd86a;
    if ((uint8_t)eax > 0xfcu) goto L_100fd86a;
L_100fd8b2: ;
    if (rd8(arg1 + 1u) < 0x40u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 1u);
        goto L_100fd8bd;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 1u);
    if ((uint8_t)eax <= 0x7eu) goto L_100fd8c5;
L_100fd8bd: ;
    if ((uint8_t)eax < 0x80u) goto L_100fd86a;
    if ((uint8_t)eax > 0xfcu) goto L_100fd86a;
L_100fd8c5: ;
    return (eax & 0xffff0000u) | 2u;
L_100fd8ca: ;
    return (eax & 0xffff0000u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fd860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fd860(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
