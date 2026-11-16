/* f_0x102112b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102112b0(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x40u) == 0u) goto L_1021132b;
    eax = rd32(self + 0x40u);
    if (eax == 3u)
    {
        ecx = (self & 0xffff0000u) | rd16(sp0 + 4u);
        goto L_102112c9;
    }
    ecx = (self & 0xffff0000u) | rd16(sp0 + 4u);
    if (eax != 1u) goto L_102112cf;
L_102112c9: ;
    if ((uint16_t)ecx == 1u) goto L_102112df;
L_102112cf: ;
    if (eax == 3u) goto L_102112d9;
    if (eax != 2u) goto L_10211302;
L_102112d9: ;
    if ((uint16_t)ecx != 2u) goto L_10211302;
L_102112df: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578188u)), 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_10211324;
    }
    eax = t3;
    edx = t4;
    t5 = rd32(COW_IMG(0x10578188u));
    wr32(sp0 + 4u, COW_IMG(0x10211330u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1012ca90u), eax, t5, edx);
    return;
L_10211302: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x10578188u)), 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u) goto L_1021132b;
    eax = t1;
    edx = t2;
    wr32(sp0 + 4u, COW_IMG(0x1036f618u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1015e910u), eax, COW_IMG(0x10621838u), edx);
    return;
L_10211324: ;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10211340u), 0);
L_1021132b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102112b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102112b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
