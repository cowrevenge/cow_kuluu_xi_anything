/* f_0x1028c510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_1028c510(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(arg1 + 0x34u) <= 0) goto L_1028c545;
    eax = rd32(arg1 + 0x34u);
    ecx = self;
    edx = in_edx;
    esi = 0u;
L_1028c524: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x10279870u), 2, arg1, esi);
    t2 = g->edx;
    if (rd32(t1) != 0xf0001u)
    {
        ecx = rd32(t1);
        edx = t2;
        goto L_1028c53d;
    }
    eax = t1;
    ecx = rd32(t1);
    edx = t2;
    if (rd32(eax + 0x58u) == arg2) goto L_1028c54f;
L_1028c53d: ;
    if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x34u))
    {
        eax = rd32(arg1 + 0x34u);
        esi = esi + 1u;
        goto L_1028c524;
    }
L_1028c545: ;
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_1028c54f: ;
    fpush(g, (double)rdf32(eax + 0x40u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028c510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028c510(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
