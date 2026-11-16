/* f_0x10299630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10299630(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    if (rd32(arg2) != 0xa0009u)
    {
        ecx = rd32(arg2);
        esi = rd32(arg2 + 0x34u);
        goto L_10299650;
    }
    esi = rd32(arg2 + 0x34u);
    if (rd32(arg2 + 0x50u) != 0u)
    {
        eax = arg2;
        edi = in_edi;
        goto L_102996fc;
    }
    ecx = rd32(arg2 + 0x50u);
L_10299650: ;
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, 0u);
    if (rd32(arg1 + 0x60u) == 0u)
    {
        eax = rd32(arg1 + 0x60u);
        wr32(sp0 - 0x14u, 0x100002u);
        loc_14 = 0x100002u;
    }
    else
    {
        eax = rd32(arg1 + 0x60u);
        wr32(sp0 - 0x14u, 0x100006u);
        loc_14 = 0x100006u;
    }
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10284b40u), 2, loc_14, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(arg1 + 0x58u) == 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        if (rd32(esi + 0x64u) == 0u)
        {
            wr32(sp0 - 0x10u, arg2);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10291310u), 1, arg2);
            t3 = g->ecx;
            t4 = g->edx;
            ecx = t3;
            edx = t4;
        }
    }
    if (rd32(arg1 + 0x58u) != 0u)
    {
        eax = rd32(arg1 + 0x58u);
        if (eax != 1u)
        {
            if (eax != 2u)
            {
                ebx = 0u;
            }
            else
            {
                ebx = rd32(esi + 0x68u);
            }
        }
        else
        {
            ebx = rd32(esi + 0x64u);
        }
    }
    else
    {
        eax = rd32(arg1 + 0x58u);
        ebx = rd32(esi + 0x58u);
    }
    t5 = rd32(esi + 0x64u);
    wr32(esi + 0x64u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_stdcall(g, COW_IMG(0x1029b5e0u), 0);
    t7 = g->edx;
    wr32(sp0 - 0x10u, 4u);
    wr32(sp0 - 0x14u, arg2);
    g->ecx = arg2;
    g->edx = t7;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10285870u), 1, arg2);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x14u;
    t10 = cow_stdcall(g, COW_IMG(0x1029b640u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->edx = t12;
    cow_stdcall(g, COW_IMG(0x102a3780u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(esi + 0x64u, t5);
    g->ecx = t13;
    t15 = cow_stdcall(g, COW_IMG(0x102a2020u), 0);
    t16 = g->ecx;
    wr32(t15 + 0x44u, t10);
    wr32(sp0 - 0x18u, arg2 + 0x14u);
    wr32(sp0 - 0x1cu, t15 + 0x14u);
    g->eax = t15 + 0x14u;
    g->edx = arg2 + 0x14u;
    t17 = cow_cdecl(g, COW_IMG(0x1028d9e0u), 2, t15 + 0x14u, arg2 + 0x14u);
    t18 = g->edx;
    wr32(sp0 - 0x20u, sp0 + 8u);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10285760u), 1, sp0 + 8u);
    eax = t15;
    edi = rd32(sp0 - 0xcu);
L_102996fc: ;
    g->edi = edi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10299630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10299630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
