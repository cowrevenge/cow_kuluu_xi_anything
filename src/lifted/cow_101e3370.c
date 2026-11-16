/* f_0x101e3370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e3370(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    if (rd8(self + 4u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 4u);
        goto L_101e33dd;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 4u);
    if (rd8(self + 0xdu) == 0u) goto L_101e33d1;
    if ((uint8_t)eax < 1u) goto L_101e33dd;
    if ((uint8_t)eax > 2u) goto L_101e33dd;
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), self, 4, sp0 - 4u, 0u, 0u, eax);
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_101e33a4;
    }
    eax = t1;
    zf = rd8(self + 0xcu) == 0u;
L_101e33bd: ;
    if (zf) goto L_101e33d1;
L_101e33bf: ;
    if (rd8(self + 0xdu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xdu);
        goto L_101e33d1;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xdu);
    wr8(self + 0xdu, (uint8_t)((uint8_t)eax - 1u));
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    return eax & 0xffffff00u;
L_101e33a4: ;
    if ((uint8_t)eax != 1u) goto L_101e33bf;
    if (rd8(self + 0xcu) != 1u) goto L_101e33bf;
    if (rd32(sp0 - 4u) == 0u)
    {
        eax = rd32(sp0 - 4u);
        goto L_101e33bf;
    }
    eax = rd32(sp0 - 4u);
    zf = rd32(eax) == rd32(self + 8u);
    eax = rd32(self + 8u);
    goto L_101e33bd;
L_101e33d1: ;
    wr8(self + 4u, 0u);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 0u);
    wr8(self + 0xdu, 0u);
L_101e33dd: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e3370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
