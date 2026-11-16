/* f_0x1024d2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1024d2e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10252c30u), 1, arg1 + 0xccu);
    t1 = g->ecx;
    t2 = g->edx;
    if (arg2 == 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        g->ecx = arg1 + 0xa8u;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10252c30u), 1, arg1 + 0xa8u);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    esi = arg1 + 0x224u;
    edi = 4u;
L_1024d319: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x102512d0u), ecx, 3, esi, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    if (edi != 1u)
    {
        ecx = t5;
        edx = t6;
        esi = esi - 0x1cu;
        edi = edi - 1u;
        goto L_1024d319;
    }
    ecx = t5;
    edx = t6;
    if (arg2 != 0u)
    {
        esi = arg1 + 0x1b4u;
        edi = 4u;
L_1024d337: ;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, COW_IMG(0x102512d0u), ecx, 3, esi, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        if (edi != 1u)
        {
            ecx = t7;
            edx = t8;
            esi = esi - 0x1cu;
            edi = edi - 1u;
            goto L_1024d337;
        }
        ecx = t7;
        esi = 3u;
        edi = arg1 + 0x14cu;
L_1024d351: ;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, COW_IMG(0x102512d0u), ecx, 3, edi - 8u, in_edi, in_esi);
        t9 = g->ecx;
        t10 = 0xffffffffu - (esi & 1u);
        wr32(edi, t10);
        if ((int32_t)(esi - 1u) >= 0)
        {
            ecx = t10;
            esi = esi - 1u;
            edi = edi - 0x1cu;
            goto L_1024d351;
        }
        eax = esi & 1u;
        ecx = t10;
        g->ecx = ecx;
        g->edx = arg1 + 0x240u;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10253230u), eax, g->ecx, g->edx, 1, 3, arg1 + 0x240u, in_edi, in_esi);
        t11 = g->ecx;
        t12 = g->edx;
        ecx = t11;
        edx = t12;
    }
    t13 = (rd32(arg1) & 0xffff00ffu) | (rd32(arg1) >> 8u & 0xdfu) << 8u;
    wr32(arg1, t13);
    esi = 0x934u;
L_1024d38c: ;
    if (rd32(esi + rd32(COW_IMG(0x1099d200u))) != 0u)
    {
        eax = rd32(esi + rd32(COW_IMG(0x1099d200u)));
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x1038969cu), 0x160u);
        t14 = rd32(COW_IMG(0x1099d200u));
        wr32(esi + t14, 0u);
        t15 = rd32(COW_IMG(0x1099d200u));
        wr32(esi + t15 + 0x10u, 0u);
        ecx = t14;
        edx = t15;
    }
    if ((int32_t)(esi + 4u) < 2364)
    {
        esi = esi + 4u;
        goto L_1024d38c;
    }
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x93cu);
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x1038969cu), 0x167u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x93cu, 0u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x94cu, 0u);
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024d2e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024d2e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
