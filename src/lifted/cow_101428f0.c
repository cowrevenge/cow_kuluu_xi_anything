/* f_0x101428f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101428f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10141e70u), 0);
    t2 = g->edx;
    if ((int32_t)t1 <= 0)
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x10578280u));
        edx = t2;
        goto L_10142924;
    }
    eax = t1;
    ecx = rd32(COW_IMG(0x10578280u));
    edx = t2;
    if (rd32(ecx + 0x38u) == 0u) goto L_10142924;
    esi = rd32(ecx + 0x38u);
    edi = (in_edi & 0xffff0000u) | rd16(ecx + 0x20u);
    if ((int16_t)edi <= 0)
    {
        edx = 0u;
        goto L_10142924;
    }
    edi = (uint32_t)(int16_t)edi;
    edx = 0u;
    esi = esi + 0x48u;
L_10142918: ;
    if (rd32(esi) == eax) goto L_10142930;
    if ((int32_t)(edx + 1u) < (int32_t)edi)
    {
        edx = edx + 1u;
        esi = esi + 0x54u;
        goto L_10142918;
    }
    edx = edx + 1u;
L_10142924: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101f7080u), eax, ecx, g->edx, 0, 2, 0u, 0u);
    return;
L_10142930: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101f7080u), eax, ecx, g->edx, 0, 2, edx, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101428f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101428f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
