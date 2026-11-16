/* f_0x10272700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10272700(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0xffffffffu) goto L_1027272a;
    if (rd8(rd32(COW_IMG(0x1099b184u)) + 0x9cu) != 0u)
    {
        eax = rd32(COW_IMG(0x1099b184u));
        ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x1099b184u)) + 0x9cu);
        goto L_10272740;
    }
    eax = rd32(COW_IMG(0x1099b184u));
    ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x1099b184u)) + 0x9cu);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1028ed00u), 3, COW_IMG(0x1099b13cu), 3u, 1u);
    return;
L_1027272a: ;
    if (arg1 != 1u)
    {
        eax = arg1;
        ecx = self;
        goto L_10272740;
    }
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1028ed00u), 3, COW_IMG(0x1099b13cu), 3u, arg1);
    return;
L_10272740: ;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1028ed00u), 3, COW_IMG(0x1099b13cu), 3u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10272700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10272700(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
