/* f_0x100f7f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f7f10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_100f7f8f;
    }
    g->eax = in_eax;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100f7bc0u), 4, 0xcu, 0xffffffffu, 0xffffffffu, 0xffffffffu);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100f7f8f;
    }
    eax = t1;
    wr32(eax + 0x10u, rd32(arg1));
    t2 = rd32(arg1 + 4u);
    wr32(eax + 0x14u, t2);
    t3 = rd32(arg1 + 8u);
    wr32(eax + 0x18u, t3);
    t4 = rd32(arg1 + 0xcu);
    wr32(eax + 0x1cu, t4);
    wr8(eax + 0x1fu, 0u);
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        edi = eax + 0x10u;
        eax = rd8(rd8(edi) * 2u + rd32(COW_IMG(0x103d0030u))) & 2u;
        ecx = rd8(edi);
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        ecx = eax + 0x10u;
        edx = t4;
        edi = eax + 0x10u;
        g->eax = rd8(edi);
        g->edx = edx;
        t5 = rd8(edi);
        g->esp = sp0 - 4u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, t5, 2u, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    if (eax != 0u)
    {
        g->eax = rd8(edi);
        t9 = rd8(edi);
        g->esp = sp0 - 8u;
        t10 = cow_call_regs(g, COW_IMG(0x10313bb4u), g->eax, ecx, edx, 1, 1, t9);
        wr8(edi, (uint8_t)t10);
        eax = t10;
    }
    return (eax & 0xffffff00u) | 1u;
L_100f7f8f: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f7f10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
