/* f_0x1026fec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1026fec0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x1099aed0u)) == 0u) goto L_1026fef3;
    ecx = rd32(COW_IMG(0x1099aed0u));
    if ((int32_t)rd32(COW_IMG(0x1099aeccu)) <= 0) goto L_1026fef3;
    edx = rd32(COW_IMG(0x1099aeccu));
    eax = 0u;
    esi = 0u;
L_1026fede: ;
    if ((rd8(ecx) & 0x40u) == 0u) goto L_1026fee8;
    if (esi == arg1) goto L_1026ff00;
    esi = esi + 1u;
L_1026fee8: ;
    if ((int32_t)(eax + 1u) < (int32_t)edx)
    {
        eax = eax + 1u;
        ecx = ecx + 0xacu;
        goto L_1026fede;
    }
L_1026fef3: ;
    wr32(arg2, 0xffffffffu);
    return;
L_1026ff00: ;
    wr32(arg2, eax);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026fec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026fec0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
