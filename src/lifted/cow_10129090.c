/* f_0x10129090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10129090(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1228;
    uint32_t loc_122c;
    uint32_t loc_1238;
    uint32_t loc_123c;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 4712u);

    wr32(sp0 - 0x1240u, in_ebx);
    wr32(sp0 - 0x1244u, in_ebp);
    wr32(sp0 - 0x1248u, in_esi);
    t1 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x1062193cu)) + 0x32u);
    wr32(sp0 - 0x1238u, t1);
    wr32(sp0 - 0x124cu, in_edi);
    wr32(sp0 - 0x1230u, self);
    wr32(sp0 - 0x123cu, 0u);
    g->esp = sp0 - 0x124cu;
    cow_thiscall(g, COW_IMG(0x1012a360u), sp0 - 0x1224u, 0);
    wr32(sp0 - 0x1250u, 0u);
    wr32(sp0 - 0x1254u, 0u);
    wr32(sp0 - 0x1258u, arg4);
    wr32(sp0 - 0x125cu, arg2);
    g->eax = arg2;
    g->edx = arg4;
    t2 = cow_thiscall(g, COW_IMG(0x1012a420u), sp0 - 0x1224u, 4, arg2, arg4, 0u, 0u);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1012a4e0u), sp0 - 0x1224u, 0);
    t5 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t5;
        ebx = 0u;
        esi = self;
    }
    else
    {
        eax = t4;
        ebx = 0u;
        ebp = COW_IMG(0x104e2158u);
        loc_123c = 0u;
L_101290f1: ;
        t6 = rd32(sp0 - 0x1238u);
        wr32(sp0 - 0x1250u, t6);
        wr32(sp0 - 0x1254u, 0x1ffu);
        wr32(sp0 - 0x1258u, sp0 - 0x1200u);
        wr32(sp0 - 0x1234u, ebp);
        g->ebx = ebx;
        g->edx = sp0 - 0x1200u;
        g->esp = sp0 - 0x124cu;
        cow_thiscall(g, COW_IMG(0x1012a4f0u), sp0 - 0x1224u, 3, sp0 - 0x1200u, 0x1ffu, t6);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0x1250u, sp0 - 0x1200u);
        g->esp = sp0 - 0x1244u;
        t9 = cow_call_regs(g, COW_IMG(0x10128680u), sp0 - 0x1200u, g->ecx, g->edx, 1, 3, sp0 - 0x1200u, in_edi, in_esi);
        wr32(sp0 - 0x1254u, 0u);
        wr32(sp0 - 0x1258u, 0u);
        wr32(sp0 - 0x125cu, 0x800u);
        wr32(sp0 - 0x1260u, sp0 - 0x1000u);
        wr32(sp0 - 0x1264u, sp0 - 0x1200u);
        g->edx = sp0 - 0x1200u;
        g->esp = sp0 - 0x1250u;
        cow_cdecl(g, COW_IMG(0x101284f0u), 5, sp0 - 0x1200u, sp0 - 0x1000u, 0x800u, 0u, 0u);
        t10 = g->edx;
        esi = arg3;
        edi = ebp;
        ecx = 0xfu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t11 = (uint32_t)(int16_t)(t9 + 1u) * 2u;
        wr16(ebp + 0x10u, (uint16_t)(t9 + 1u));
        wr32(sp0 - 0x1250u, 1u);
        esi = sp0 - 0x1000u;
        edi = ebp + 0x3cu;
        ecx = t11 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t11 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        g->ebx = t9 + 1u;
        g->esp = sp0 - 0x124cu;
        t12 = cow_call_regs(g, COW_IMG(0x10162560u), t11, rd32(COW_IMG(0x1062193cu)), t10, 0, 1, 1u);
        t13 = g->edx;
        t14 = rd32(sp0 - 0x123cu) + 1u;
        wr32(sp0 - 0x123cu, t14);
        g->edx = t13;
        t15 = cow_thiscall(g, COW_IMG(0x1012a4e0u), sp0 - 0x1224u, 0);
        t16 = g->edx;
        if (t15 == 0u)
        {
            eax = t15;
            ebx = t9 + 1u;
            ebp = ebp + 0x800u;
            goto L_101290f1;
        }
        eax = t15;
        edx = t16;
        esi = t14;
        ebx = esi;
        esi = rd32(sp0 - 0x1230u);
    }
    wr32(sp0 - 0x122cu, ebx);
    if ((int32_t)ebx <= 0)
    {
        loc_122c = ebx;
    }
    else
    {
        loc_122c = ebx;
        t17 = COW_IMG(0x104e1958u) + (ebx << 0xbu);
        wr32(sp0 - 0x123cu, t17);
        wr32(sp0 - 0x1238u, COW_IMG(0x104e2158u));
        eax = loc_122c;
        ecx = COW_IMG(0x104e2158u);
        ebp = t17;
        loc_123c = t17;
        loc_1238 = COW_IMG(0x104e2158u);
L_101291d2: ;
        if ((uint32_t)(int8_t)arg1 == 0u) goto L_101291f4;
        if ((uint32_t)(int8_t)arg1 != 1u) goto L_10129204;
        t18 = ((uint32_t)(int8_t)arg1 - 1u & 0xffff0000u) | rd16(ebp + 0x10u);
        wr32(sp0 - 0x1250u, t18);
        wr32(sp0 - 0x1234u, ebp);
        g->eax = eax;
        g->esp = sp0 - 0x124cu;
        t19 = cow_thiscall(g, COW_IMG(0x10127320u), esi, 1, t18);
        eax = t19;
L_10129208: ;
        wr32(sp0 - 0x1228u, ebp + 0x3cu);
        esi = ebp;
        edi = eax;
        ecx = 0xfu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if ((int32_t)ebx <= 1)
        {
            edx = eax + 0x3cu;
            loc_1228 = ebp + 0x3cu;
        }
        else
        {
            edx = eax + 0x3cu;
            loc_1228 = ebp + 0x3cu;
            t22 = rd8(eax + 0x15u);
            wr32(eax + 0x38u, 0u);
            wr8(eax + 0x15u, t22 & 0xb0u);
        }
        t23 = rd16(ebp + 0x10u) * 2u;
        esi = loc_1228;
        edi = edx;
        ecx = t23 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t23 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr32(sp0 - 0x123cu, loc_123c - 0x800u);
        wr32(sp0 - 0x1238u, loc_1238 + 0x800u);
        if ((int32_t)(ebx - 1u) > 0)
        {
            ebx = ebx - 1u;
            loc_123c = loc_123c - 0x800u;
            loc_1238 = loc_1238 + 0x800u;
            goto L_101291c6;
        }
        edx = loc_1238 + 0x800u;
    }
    g->edx = edx;
    g->esp = sp0 - 0x124cu;
    cow_stdcall(g, COW_IMG(0x1012a350u), 0);
    t24 = g->edx;
    g->ebx = in_ebx;
    g->edx = t24;
    return rd32(sp0 - 0x122cu);
L_101291c6: ;
    ecx = loc_1238;
    ebp = loc_123c;
    esi = self;
    goto L_101291d2;
L_101291f4: ;
    wr32(sp0 - 0x1234u, ecx);
    t20 = (eax & 0xffff0000u) | rd16(ecx + 0x10u);
    wr32(sp0 - 0x1250u, t20);
    g->eax = t20;
    g->esp = sp0 - 0x124cu;
    t21 = cow_thiscall(g, COW_IMG(0x10127280u), esi, 1, t20);
    eax = t21;
L_10129204: ;
    ebp = rd32(sp0 - 0x1234u);
    goto L_10129208;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10129090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10129090(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
