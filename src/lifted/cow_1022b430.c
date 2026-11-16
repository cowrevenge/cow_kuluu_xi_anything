/* f_0x1022b430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1022b430(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        eax = 0xffffffffu;
        loc_4 = self;
        goto L_1022b560;
    }
    if (rd8(arg1) == 0u)
    {
        eax = 0xffffffffu;
        loc_4 = self;
        goto L_1022b560;
    }
    if (rd32(COW_IMG(0x10667a74u)) == 0u)
    {
        eax = 0xffffffffu;
        loc_4 = self;
        goto L_1022b560;
    }
    edx = in_edx;
    ebp = 0u;
    esi = 0u;
    loc_4 = 0u;
L_1022b467: ;
    if ((uint32_t)(int16_t)rd16(esi + rd32(COW_IMG(0x10667a74u))) == 0u) goto L_1022b4ba;
    ecx = rd32(COW_IMG(0x10667a74u));
    ebx = (uint32_t)(int16_t)rd16(esi + rd32(COW_IMG(0x10667a74u)));
    edi = esi + rd32(COW_IMG(0x10667a74u));
    if (arg2 == 0u) goto L_1022b484;
    if ((uint32_t)(int16_t)rd16(edi + 2u) != arg2)
    {
        edx = (uint32_t)(int16_t)rd16(edi + 2u);
        goto L_1022b4ba;
    }
    edx = (uint32_t)(int16_t)rd16(edi + 2u);
L_1022b484: ;
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x1022bda0u), arg2, ecx, edx, 1, 0);
    t2 = g->edx;
    g->ebx = ebx;
    g->ecx = t1;
    g->edx = t2;
    g->esp = sp0 - 0x14u;
    t3 = cow_stdcall(g, COW_IMG(0x1022bf10u), 1, ebp);
    t4 = g->ecx;
    t5 = g->edx;
    g->esp = sp0 - 0x1cu;
    t6 = cow_call_regs(g, COW_IMG(0x1022bda0u), t3, t4, t5, 1, 0);
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0 - 0x18u;
    t8 = cow_thiscall(g, COW_IMG(0x1022bf00u), t6, 1, ebp);
    t9 = g->ecx;
    t10 = g->edx;
    g->eax = arg1;
    g->edx = t10;
    t11 = cow_thiscall_cdecl(g, rd32(COW_IMG(0x10662f60u)), t9, 2, arg1, t8);
    t12 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        edx = t12;
        goto L_1022b4d3;
    }
    edx = t12;
    ebp = loc_4;
L_1022b4ba: ;
    if ((int32_t)(esi + 0x64u) < 102400)
    {
        esi = esi + 0x64u;
        loc_4 = ebp + 1u;
        ebp = ebp + 1u;
        goto L_1022b467;
    }
    loc_4 = ebp + 1u;
    g->ebx = in_ebx;
    return 0xffffffffu;
L_1022b4d3: ;
    eax = 0u;
    ecx = edi + 0xeu;
L_1022b4d8: ;
    if (rd16(ecx) < 0xffffu) goto L_1022b4f1;
    if ((int32_t)(eax + 1u) < 24)
    {
        eax = eax + 1u;
        ecx = ecx + 2u;
        goto L_1022b4d8;
    }
    eax = eax + 1u;
    g->ebx = in_ebx;
    return 0xffffffffu;
L_1022b4f1: ;
    if ((int32_t)ebx <= 0)
    {
        ebp = ebx;
        goto L_1022b551;
    }
    ebp = ebx;
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        goto L_1022b551;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t13 = cow_thiscall(g, COW_IMG(0x100f00a0u), ecx, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        ecx = t14;
        edx = t15;
    }
    else
    {
        esi = t13;
        if ((int32_t)(loc_4 & 0x80000007u) >= 0)
        {
            eax = loc_4;
            ecx = loc_4 & 0x80000007u;
        }
        else
        {
            eax = loc_4;
            ecx = loc_4 & 0x80000007u;
            ecx = (ecx - 1u | 0xfffffff8u) + 1u;
        }
        if ((rd8(esi + (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 7u)) >> 3u)) & (uint8_t)(1u << (ecx & 0x1fu))) != 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(esi + (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 7u)) >> 3u));
            edx = (uint32_t)((int32_t)eax >> 0x1fu) & 7u;
        }
        else
        {
            ecx = (ecx & 0xffffff00u) | rd8(esi + (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 7u)) >> 3u));
            edx = (uint32_t)((int32_t)eax >> 0x1fu) & 7u;
            ebp = 0xfffffffeu;
        }
    }
    g->esp = sp0 - 4u;
    t16 = cow_cdecl(g, COW_IMG(0x1022b7d0u), 5, edi, in_edi, in_esi, in_ebp, in_ebx);
    if ((uint8_t)t16 != 0u)
    {
        eax = t16;
        goto L_1022b551;
    }
    g->ebx = in_ebx;
    return 0xfffffffeu;
L_1022b551: ;
    if (ebp != 0u) goto L_1022b55e;
    g->ebx = in_ebx;
    return 0xffffffffu;
L_1022b55e: ;
    eax = ebp;
L_1022b560: ;
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022b430(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
