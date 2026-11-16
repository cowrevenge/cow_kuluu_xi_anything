/* f_0x10266b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10266b40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 156u);

    wr32(sp0 - 0x94u, 0x94u);
    wr32(sp0 - 0x98u, sp0 - 0x94u);
    g->eax = sp0 - 0x94u;
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103291a8u)), 1, sp0 - 0x94u);   /* kernel32.dll!GetVersionExA */
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10266b78;
    }
    edx = t2;
    if (rd32(sp0 - 0x90u) > 5u)
    {
        eax = rd32(sp0 - 0x90u);
        goto L_10266b6f;
    }
    eax = rd32(sp0 - 0x90u);
    zf = rd32(sp0 - 0x90u) == 5u;
    if (!zf) goto L_10266b78;
    if (rd32(sp0 - 0x8cu) < 1u) goto L_10266b78;
L_10266b6f: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10266b78: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10266b40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
