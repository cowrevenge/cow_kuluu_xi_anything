/* f_0x10214760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10214760(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    int64_t q1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg3 <= (int32_t)rd16(self + 0x186u))
    {
        eax = in_eax;
        edx = in_edx;
        ebx = (uint32_t)(int16_t)rd16(self + 0x17au);
        goto L_102147b7;
    }
    ebx = (uint32_t)(int16_t)rd16(self + 0x17au);
    esi = rd16(self + 0x186u);
    q1 = (int64_t)cow_muls(0xae147ae1u, arg1 * arg3);
    t2 = (uint32_t)((int32_t)cow_qhi(q1) >> 5u);
    wr16(self + 0x17au, (uint16_t)(t2 + (t2 >> 0x1fu)));
    if ((int32_t)(esi - (uint32_t)(int16_t)(t2 + (t2 >> 0x1fu))) <= (int32_t)arg3)
    {
        eax = (uint32_t)(int16_t)(t2 + (t2 >> 0x1fu));
        edx = t2 + (t2 >> 0x1fu);
        goto L_102147b2;
    }
    eax = (uint32_t)(int16_t)(t2 + (t2 >> 0x1fu));
    edx = t2 + (t2 >> 0x1fu);
    wr16(self + 0x17au, (uint16_t)(esi - arg3));
L_102147c0: ;
    if (ebx != (uint32_t)(int16_t)rd16(self + 0x17au))
    {
        ecx = (uint32_t)(int16_t)rd16(self + 0x17au);
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    }
    return;
L_102147b2: ;
    if ((int16_t)edx <= 0) goto L_102147c0;
L_102147b7: ;
    wr16(self + 0x17au, 0u);
    goto L_102147c0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10214760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10214760(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
