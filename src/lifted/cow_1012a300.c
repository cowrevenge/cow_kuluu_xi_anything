/* f_0x1012a300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1012a300(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x1036f118u)) == 0xffu)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1036f118u));
        edx = in_edx;
        goto L_1012a32e;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1036f118u));
    ecx = COW_IMG(0x1036f118u);
    edx = (in_edx & 0xffffff00u) | rd8(arg1);
    ebx = in_ebx;
L_1012a316: ;
    if ((uint8_t)edx != (uint8_t)eax) goto L_1012a324;
    if (rd8(arg1 + 1u) == rd8(ecx + 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 1u);
        goto L_1012a333;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(ecx + 1u);
L_1012a324: ;
    if (rd8(ecx + 2u) != 0xffu)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 2u);
        ecx = ecx + 2u;
        goto L_1012a316;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 2u);
L_1012a32e: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1012a333: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012a300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012a300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
