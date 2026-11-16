/* f_0x1009f8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1009f8e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t zf;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = 0u;
    ecx = arg1;
    edx = in_edx;
    esi = arg1 + 0x20u;
    edi = 0u;
L_1009f8f6: ;
    if (rd16(esi - 0x10u) == 0u) goto L_1009f93c;
    ecx = (ecx & 0xffff0000u) | rd16(esi);
    edx = (edx & 0xffff0000u) | rd16(esi - 0x10u);
    if ((uint16_t)ecx == 0u) goto L_1009f93c;
    zf = (uint16_t)ecx == 0u;
    if (zf) goto L_1009f92e;
    edx = (uint16_t)edx;
L_1009f90f: ;
    wr32(COW_IMG(0x1048890cu) + eax * 4u, edx);
    wr32(COW_IMG(0x1048892cu) + eax * 4u, 1u);
    if (eax + 1u >= 8u) goto L_1009f955;
    eax = eax + 1u;
    if ((uint16_t)(ecx + 0xffffu) != 0u)
    {
        ecx = ecx + 0xffffu;
        goto L_1009f90f;
    }
    ecx = ecx + 0xffffu;
L_1009f92e: ;
    if (eax >= 8u) goto L_1009f955;
    if (edi + 1u < 8u)
    {
        esi = esi + 2u;
        edi = edi + 1u;
        goto L_1009f8f6;
    }
L_1009f93c: ;
    if (eax >= 8u) goto L_1009f955;
L_1009f941: ;
    wr32(COW_IMG(0x1048890cu) + eax * 4u, 0u);
    wr32(COW_IMG(0x1048892cu) + eax * 4u, 0u);
    if (eax + 1u < 8u)
    {
        eax = eax + 1u;
        goto L_1009f941;
    }
L_1009f955: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009f8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1009f8e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
