/* f_0x102c9e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102c9e90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2004;
    uint32_t loc_2008;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 8236u);

    wr32(sp0 - 0x2010u, in_ebx);
    wr32(sp0 - 0x2014u, in_ebp);
    wr32(sp0 - 0x2018u, in_edi);
    t1 = rd32(arg1 + 0x24u);
    wr32(sp0 - 0x2004u, t1);
    t2 = rd32(t1) + 1u;
    t3 = rd32(arg1 + 0x28u);
    wr32(t1, t2);
    t4 = t1 + 0x1003u & 0xfffff000u;
    wr32(sp0 - 0x2008u, t4);
    if (t3 == 0x1000u)
    {
        eax = t3;
        ecx = t4;
        ebx = t1;
        loc_2004 = t1;
        loc_2008 = t4;
        goto L_102c9ee9;
    }
    eax = t3;
    ecx = t4;
    edx = t2;
    ebx = t1;
    loc_2004 = t1;
    loc_2008 = t4;
    if ((int32_t)edx <= 0) goto L_102c9ee9;
    wr32(ebx, 0xfffffffcu);
    if ((int32_t)eax >= 3544) goto L_102c9f95;
    wr32(ebx, 0xfffffffdu);
L_102c9ee9: ;
    t5 = rd32(arg1 + 0x10u);
    wr32(arg1 + 0x28u, t5);
    t6 = rd32(arg1 + 0x14u);
    wr32(arg1 + 0x2cu, t6);
    if (rd32(ebx) == 0u) goto L_102c9fd0;
    wr32(sp0 - 0x201cu, in_esi);
    if ((int32_t)(uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 3u)) >> 2u) <= 0)
    {
        edx = (uint32_t)((int32_t)eax >> 0x1fu) & 3u;
        esi = 0u;
        goto L_102c9f5a;
    }
    eax = (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 3u)) >> 2u);
    ecx = rd32(arg1 + 0x1cu);
    edx = sp0 - 0x2000u - rd32(arg1 + 0x1cu);
    ebx = sp0 - 0x1000u - rd32(arg1 + 0x1cu);
    esi = eax;
L_102c9f23: ;
    wr32(sp0 - 0x200cu, (uint32_t)(int16_t)rd16(ecx));
    t7 = rd16(ecx);
    wrf32(ecx + edx, (float)(double)(int32_t)(uint32_t)(int16_t)t7);
    t8 = (uint32_t)(int16_t)rd16(ecx + 2u);
    wr32(sp0 - 0x200cu, t8);
    wrf32(ebx + ecx, (float)(double)(int32_t)t8);
    if (eax != 1u)
    {
        eax = eax - 1u;
        ecx = ecx + 4u;
        goto L_102c9f23;
    }
    if ((int32_t)esi >= 1024)
    {
        ecx = loc_2008;
        ebx = loc_2004;
        goto L_102c9f6e;
    }
    ecx = loc_2008;
    ebx = loc_2004;
L_102c9f5a: ;
    wr32(esi * 4u + sp0 - 0x2000u, 0u);
    wr32(esi * 4u + sp0 - 0x1000u, 0u);
    if ((int32_t)(esi + 1u) < 1024)
    {
        esi = esi + 1u;
        goto L_102c9f5a;
    }
L_102c9f6e: ;
    wr32(sp0 - 0x2020u, ecx);
    wr32(sp0 - 0x2024u, sp0 - 0x2000u);
    wr32(sp0 - 0x2028u, sp0 - 0x2000u);
    g->ebx = ebx;
    g->eax = sp0 - 0x2000u;
    g->esp = sp0 - 0x201cu;
    t9 = cow_cdecl(g, COW_IMG(0x102cc930u), 3, sp0 - 0x2000u, sp0 - 0x2000u, ecx);
    if (t9 == 0u) goto L_102c9faf;
    g->ebx = rd32(sp0 - 0x2010u);
    g->edi = rd32(sp0 - 0x2018u);
    g->ebp = rd32(sp0 - 0x2014u);
    return 0x80000005u;
L_102c9f95: ;
    if ((int32_t)eax <= 4096) goto L_102c9ee9;
    return 0x80000005u;
L_102c9faf: ;
    if ((int32_t)rd32(arg1 + 0x14u) <= 0) goto L_102c9fca;
    eax = 0u;
    ecx = rd32(arg1 + 0x14u);
L_102c9fb8: ;
    wr8(eax + rd32(arg1 + 0x20u), rd8(eax + sp0 - 0x2000u));
    if ((int32_t)(eax + 1u) < (int32_t)rd32(arg1 + 0x14u))
    {
        eax = eax + 1u;
        ecx = rd32(arg1 + 0x14u);
        goto L_102c9fb8;
    }
L_102c9fca: ;
    if (rd32(ebx) != 0u)
    {
        ebx = rd32(ebx);
        goto L_102c9fdc;
    }
L_102c9fd0: ;
    g->ebx = in_ebx;
    return 0u;
L_102c9fdc: ;
    g->ebx = rd32(sp0 - 0x2010u);
    g->edi = rd32(sp0 - 0x2018u);
    g->ebp = rd32(sp0 - 0x2014u);
    return (ebx != 1u) + 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c9e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c9e90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
