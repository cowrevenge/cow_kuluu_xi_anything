/* f_0x1015ecc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015ecc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        loc_4 = t1;
        goto L_1015ecfe;
    }
    edx = t2;
    loc_4 = t1;
L_1015ecd8: ;
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x1015ee00u), 1, sp0 - 4u);
    t4 = g->edx;
    if (t3 == 0u)
    {
        edx = t4;
        goto L_1015ecf6;
    }
    eax = t3;
    edx = t4;
    if ((rd32(eax + 0x34u) & arg1) == 0u) goto L_1015ecf6;
    if (rd32(eax + 0x10u) != 0xeu) goto L_1015ed05;
L_1015ecf6: ;
    if (rd32(sp0 - 4u) != 0u) goto L_1015ecd8;
    eax = rd32(sp0 - 4u);
L_1015ecfe: ;
    return eax & 0xffffff00u;
L_1015ed05: ;
    g->esi = rd32(sp0 - 8u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015ecc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015ecc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
