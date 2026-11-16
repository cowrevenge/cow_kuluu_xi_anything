/* f_0x100ebe60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100ebe60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100ebe6c;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    return eax & 0xffffff00u;
L_100ebe6c: ;
    wr8(eax + 0x19890u, 0u);
    eax = 0u;
    ecx = rd32(COW_IMG(0x104dfd98u));
    edx = 0xau;
L_100ebe80: ;
    if (rd8(eax + ecx + 0x1951cu) == 2u)
    {
        wr8(ecx + 0x19890u, (uint8_t)(rd8(ecx + 0x19890u) + 1u));
        ecx = rd32(COW_IMG(0x104dfd98u));
    }
    if (edx != 1u)
    {
        eax = eax + 0x58u;
        edx = edx - 1u;
        goto L_100ebe80;
    }
    eax = eax + 0x58u;
    return (eax & 0xffffff00u) | rd8(ecx + 0x19890u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ebe60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ebe60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
