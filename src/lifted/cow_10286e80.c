/* f_0x10286e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10286e80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_10286ec9;
    }
    if (arg2 == 0u)
    {
        eax = arg2;
        goto L_10286ec9;
    }
    if (rd32(arg2 + 0x28u) == 0u)
    {
        eax = arg2;
        goto L_10286ec9;
    }
    edi = rd32(arg2 + 0x28u);
    if (!(rd8(arg2 + 0x14u) & 1u)) goto L_10286ec1;
    if ((int32_t)rd32(arg1 + 0x24u) <= 0) goto L_10286ec1;
    esi = rd32(arg1 + 0x24u);
    eax = 0u;
    edx = rd32(arg1 + 0x1cu);
L_10286eab: ;
    if (rd32(rd32(edx) + 0x1cu) == 0u) goto L_10286eb9;
    ecx = rd32(rd32(edx) + 0x1cu);
    if (rd32(ecx + 0x28u) == edi) goto L_10286ecc;
L_10286eb9: ;
    if ((int32_t)(eax + 1u) < (int32_t)esi)
    {
        eax = eax + 1u;
        edx = edx + 4u;
        goto L_10286eab;
    }
L_10286ec1: ;
    return 0xefbeddbau;
L_10286ec9: ;
    eax = 0xffffffffu;
L_10286ecc: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10286e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10286e80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
