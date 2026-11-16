/* f_0x102671d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102671d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327e78u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    if (self == 8u)
    {
        loc_c = t1;
        eax = 0u;
    }
    else
    {
        loc_c = t1;
        eax = self - 4u;
    }
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x10u, eax + 4u);
    wr32(sp0 - 4u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t2 = cow_fastcall(g, COW_IMG(0x10266b90u), eax + 0x10u, in_edx, 0);
    t3 = g->edx;
    wr32(sp0 - 4u, 0xffffffffu);
    if (eax == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_10267224;
    }
    edx = t3;
    esi = eax + 4u;
    eax = t2;
    if (esi == 0u) goto L_10267224;
    ecx = esi + 4u;
L_10267226: ;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x10265980u), ecx, edx, 0);
    t4 = rd32(sp0 - 0xcu);
    t5 = rd32(sp0 - 0x14u);
    wr32(g->fs_base, t4);
    g->esi = t5;
    return;
L_10267224: ;
    ecx = 0u;
    goto L_10267226;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102671d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102671d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
