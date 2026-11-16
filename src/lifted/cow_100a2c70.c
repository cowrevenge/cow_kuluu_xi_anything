/* f_0x100a2c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a2c70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(arg1 + 0x10u) < 0)
    {
        eax = in_eax;
        goto L_100a2cbf;
    }
    edx = rd32(arg1 + 0x10u);
    if ((int32_t)rd32(arg1 + 0x14u) < 0)
    {
        eax = in_eax;
        goto L_100a2cbf;
    }
    esi = rd32(arg1 + 0x14u);
    if ((int32_t)edx < (int32_t)rd32(self + 0x68u))
    {
        eax = in_eax;
        goto L_100a2cbf;
    }
    if ((int32_t)rd32(self + 0x6cu) < (int32_t)edx)
    {
        eax = in_eax;
        goto L_100a2cbf;
    }
    if (rd32(self + 0x48u) == 0u)
    {
        eax = in_eax;
        goto L_100a2cb8;
    }
    ecx = rd32(self + 0x48u);
    if (rd32(ecx + 0x14u) == 0u)
    {
        eax = rd32(ecx + 0x10u);
        goto L_100a2cb8;
    }
    eax = rd32(ecx + 0x10u);
    if ((int32_t)eax <= 0) goto L_100a2cb8;
    if ((int32_t)eax < (int32_t)rd32(arg1 + 0xcu)) goto L_100a2cbf;
    if ((int32_t)eax <= (int32_t)edx) goto L_100a2cbf;
    if ((int32_t)eax < (int32_t)esi) goto L_100a2cbf;
    if ((int32_t)eax < (int32_t)(edx + esi)) goto L_100a2cbf;
L_100a2cb8: ;
    return (eax & 0xffffff00u) | 1u;
L_100a2cbf: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2c70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
