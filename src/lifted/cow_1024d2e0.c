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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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

    g->eax = arg1 + 0xccu;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10252c30u), 1, arg1 + 0xccu);
    t2 = g->ecx;
    t3 = g->edx;
    if (arg2 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        edx = t3;
        g->eax = eax;
        g->ecx = arg1 + 0xa8u;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_cdecl(g, COW_IMG(0x10252c30u), 1, arg1 + 0xa8u);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    esi = arg1 + 0x224u;
    edi = 4u;
L_1024d319: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x102512d0u), ecx, 3, esi, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if (edi != 1u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        esi = esi - 0x1cu;
        edi = edi - 1u;
        goto L_1024d319;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    if (arg2 != 0u)
    {
        esi = arg1 + 0x1b4u;
        edi = 4u;
L_1024d337: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_thiscall_cdecl(g, COW_IMG(0x102512d0u), ecx, 3, esi, in_edi, in_esi);
        t11 = g->ecx;
        t12 = g->edx;
        if (edi != 1u)
        {
            eax = t10;
            ecx = t11;
            edx = t12;
            esi = esi - 0x1cu;
            edi = edi - 1u;
            goto L_1024d337;
        }
        eax = t10;
        ecx = t11;
        esi = 3u;
        edi = arg1 + 0x14cu;
L_1024d351: ;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, COW_IMG(0x102512d0u), ecx, 3, edi - 8u, in_edi, in_esi);
        t13 = g->ecx;
        t14 = 0xffffffffu - (esi & 1u);
        wr32(edi, t14);
        if ((int32_t)(esi - 1u) >= 0)
        {
            eax = esi & 1u;
            ecx = t14;
            esi = esi - 1u;
            edi = edi - 0x1cu;
            goto L_1024d351;
        }
        eax = esi & 1u;
        ecx = t14;
        g->ecx = ecx;
        g->edx = arg1 + 0x240u;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10253230u), eax, g->ecx, g->edx, 1, 3, arg1 + 0x240u, in_edi, in_esi);
        t15 = g->ecx;
        t16 = g->edx;
        ecx = t15;
        edx = t16;
    }
    t17 = (rd32(arg1) & 0xffff00ffu) | (rd32(arg1) >> 8u & 0xdfu) << 8u;
    wr32(arg1, t17);
    esi = 0x934u;
L_1024d38c: ;
    if (rd32(esi + rd32(COW_IMG(0x1099d200u))) != 0u)
    {
        eax = rd32(esi + rd32(COW_IMG(0x1099d200u)));
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x1038969cu), 0x160u);
        t18 = rd32(COW_IMG(0x1099d200u));
        wr32(esi + t18, 0u);
        t19 = rd32(COW_IMG(0x1099d200u));
        wr32(esi + t19 + 0x10u, 0u);
        ecx = t18;
        edx = t19;
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
