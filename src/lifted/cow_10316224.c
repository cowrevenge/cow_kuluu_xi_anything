/* f_0x10316224 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10316224(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 12u);

    wr32(arg1, in_ebp);
    wr32(arg1 + 4u, in_ebx);
    wr32(arg1 + 8u, in_edi);
    wr32(arg1 + 0xcu, in_esi);
    wr32(arg1 + 0x10u, sp0);
    wr32(arg1 + 0x14u, rd32(sp0));
    wr32(arg1 + 0x20u, 0x56433230u);
    wr32(arg1 + 0x24u, 0u);
    t1 = rd32(g->fs_base);
    wr32(arg1 + 0x18u, t1);
    if (t1 != 0xffffffffu)
    {
        eax = t1;
        if (arg2 == 0u) goto L_10316273;
        wr32(arg1 + 0x24u, arg3);
        if (arg2 != 1u) goto L_1031627b;
        eax = arg3;
L_10316273: ;
        t2 = rd32(eax + 0xcu);
        wr32(arg1 + 0x1cu, t2);
    }
    else
    {
        wr32(arg1 + 0x1cu, 0xffffffffu);
    }
L_1031629c: ;
    g->edx = arg1;
    return 0u;
L_1031627b: ;
    wr32(arg1 + 0x1cu, arg4);
    if (arg2 != 2u)
    {
        wr32(sp0 - 4u, in_esi);
        wr32(sp0 - 8u, in_edi);
        if (arg2 - 2u <= 6u)
        {
            ecx = arg2 - 2u;
        }
        else
        {
            ecx = 6u;
        }
        esi = sp0 + 0x14u;
        edi = arg1 + 0x28u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    goto L_1031629c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10316224(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10316224(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
