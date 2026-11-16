/* f_0x10160fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10160fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 >= 3072) goto L_10161004;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_10161004;
    eax = rd32(COW_IMG(0x104dfd98u));
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x100e4be0u), 1, eax);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)(uint16_t)t1 <= 0) goto L_10161004;
    ecx = t2;
    edx = t3;
    esi = 0u;
    edi = (uint16_t)t1;
L_10160fe1: ;
    g->ecx = ecx;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x100e4c00u), 2, t4, esi);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_10160fff;
    }
    eax = t5;
    edx = t7;
    if (rd16(eax) >> 1u == arg1) goto L_10161006;
    ecx = rd16(eax) >> 1u;
L_10160fff: ;
    if ((int32_t)(esi + 1u) < (int32_t)edi)
    {
        esi = esi + 1u;
        goto L_10160fe1;
    }
L_10161004: ;
    eax = 0u;
L_10161006: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10160fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10160fb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
