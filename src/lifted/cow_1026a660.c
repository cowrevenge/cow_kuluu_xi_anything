/* f_0x1026a660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1026a660(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103294acu)), 1, 0x48u);   /* ole32.dll!CoTaskMemAlloc */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        pf = PARITY((uint8_t)t1);
        zf = t1 == 0u;
        sf = (int32_t)t1 < 0;
        goto L_1026a673;
    }
    eax = t1;
    return eax;
L_1026a673: ;
    g->cf = 0u;
    g->pf = pf;
    g->af = 0u;
    g->zf = zf;
    g->sf = sf;
    g->of = 0u;
    g->eax = arg1;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x1026a6a0u), g->eax, g->ecx, edx, 0, 2, esi, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 >= 0) goto L_1026a68f;
    eax = t4;
    ecx = t5;
    edx = t6;
    g->esp = sp0 - 4u;
    cow_stdcall(g, rd32(COW_IMG(0x103294a8u)), 1, esi);   /* ole32.dll!CoTaskMemFree */
    return 0u;
L_1026a68f: ;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026a660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026a660(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
