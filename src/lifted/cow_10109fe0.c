/* f_0x10109fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10109fe0(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101091d0u), self, 1, arg2);
    if (t1 != 0u)
    {
        ecx = t1;
        wr8(arg2 + ecx, 0u);
        if ((int32_t)((uint8_t)arg3 != 0u) >= (int32_t)arg2)
        {
            ecx = arg2 + ecx - 1u;
        }
        else
        {
            ecx = arg2 + ecx - 1u;
            esi = arg1;
            edi = arg2 - ((uint8_t)arg3 != 0u);
L_1010a00e: ;
            t2 = cow_divu(g, esi, 0xau);
            t3 = cow_modu(g, esi, 0xau);
            wr8(ecx, (uint8_t)((uint8_t)t3 + 0x30u));
            if (edi != 1u)
            {
                ecx = ecx - 1u;
                esi = t2;
                edi = edi - 1u;
                goto L_1010a00e;
            }
            ecx = ecx - 1u;
        }
        if ((uint8_t)arg3 != 0u)
        {
            wr8(ecx, (uint8_t)arg3);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10109fe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
