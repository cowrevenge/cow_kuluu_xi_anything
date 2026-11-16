/* f_0x100eaf00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100eaf00(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u)
    {
        if ((rd8(arg2 + 0xf5u) & 0x40u) == 0u)
        {
            eax = in_eax;
            ecx = self;
            edx = in_edx;
        }
        else
        {
            wr8(arg1 + 1u, 0u);
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t1 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
            t2 = g->ecx;
            t3 = g->edx;
            wr32(arg1 + 0x404u, t1);
            wr8(arg1, 3u);
            eax = t1;
            ecx = t2;
            edx = t3;
        }
        if (rd8(arg2 + 0xf4u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg2 + 0xf4u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg2 + 0xf4u);
            esi = 0u;
            edi = arg2 + 4u;
L_100eaf3b: ;
            g->edi = edi;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x100eaf70u), 5, arg1, edi, in_edi, in_esi, in_ebx);
            t4 = g->ecx;
            t5 = g->edx;
            if ((int32_t)(esi + 1u) < (int32_t)rd8(arg2 + 0xf4u))
            {
                eax = rd8(arg2 + 0xf4u);
                ecx = t4;
                edx = t5;
                esi = esi + 1u;
                edi = edi + 8u;
                goto L_100eaf3b;
            }
            eax = rd8(arg2 + 0xf4u);
        }
        if ((int8_t)rd8(arg2 + 0xf5u) < 0)
        {
            wr8(arg1, 1u);
        }
    }
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eaf00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100eaf00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
