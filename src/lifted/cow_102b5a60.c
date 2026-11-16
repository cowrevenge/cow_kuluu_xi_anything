/* f_0x102b5a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102b5a60(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_54;
    int64_t q26;
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
    uint32_t t25;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 164u);

    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_ebp);
    wr32(sp0 - 0x60u, in_esi);
    if (arg1 != 0u) goto L_102b5a98;
    wr32(sp0 - 0x64u, 0x1cfu);
    wr32(sp0 - 0x68u, COW_IMG(0x103c1fb0u));
    wr32(sp0 - 0x6cu, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x64u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c1fb0u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x70u, COW_IMG(0x103b4368u));
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4368u), COW_IMG(0x103b379cu));
    return 0u;
L_102b5a98: ;
    wr32(sp0 - 0x64u, arg1);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, 4u);
    wr32(sp0 - 0x70u, sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 + 4u, 4u, 1u, arg1, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
    t4 = g->ecx;
    t5 = g->edx;
    if (arg1 == 1u)
    {
        edx = t5;
        goto L_102b5add;
    }
    ecx = t4;
    edx = t5;
    wr32(sp0 - 0x64u, 0x1d4u);
    wr32(sp0 - 0x68u, COW_IMG(0x103c1fb0u));
    wr32(sp0 - 0x6cu, COW_IMG(0x103b379cu));
    g->eax = arg1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x64u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c1fb0u));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x70u, COW_IMG(0x103beca4u));
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beca4u), COW_IMG(0x103b379cu));
    g->ebx = rd32(sp0 - 0x58u);
    g->esi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x5cu);
    return 0u;
L_102b5add: ;
    wr32(sp0 - 0x64u, arg1);
    wr32(sp0 - 0x68u, 0x50u);
    wr32(sp0 - 0x6cu, 1u);
    wr32(sp0 - 0x70u, sp0 - 0x50u);
    g->ecx = sp0 - 0x50u;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x50u, 1u, 0x50u, arg1, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u));
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x60u;
    t11 = cow_stdcall(g, COW_IMG(0x102b5340u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x54u, t11);
    if (t11 == 0u) goto L_102b5b84;
    ecx = t12;
    edx = t13;
    esi = t11;
    loc_54 = t11;
    wr32(sp0 - 0x64u, arg1);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t14 = cow_cdecl(g, COW_IMG(0x102a9bb0u), 13, arg1, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), loc_54, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        ecx = t15;
        goto L_102b5b77;
    }
    ecx = t15;
    edx = t16;
    ebx = t14;
    wr32(sp0 - 0x64u, in_edi);
    wr32(sp0 - 0x68u, arg1);
    wr32(sp0 - 0x6cu, 1u);
    wr32(sp0 - 0x70u, 4u);
    wr32(sp0 - 0x74u, esi + 0x48u);
    g->ecx = ecx;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, esi + 0x48u, 4u, 1u, arg1, in_edi, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t17 = g->ecx;
    wr32(sp0 - 0x78u, 0x1deu);
    wr32(sp0 - 0x7cu, COW_IMG(0x103c1fb0u));
    wr32(sp0 - 0x80u, 4u);
    t18 = rd32(esi + 0x48u);
    wr32(sp0 - 0x84u, t18);
    g->edx = t18;
    g->esp = sp0 - 0x70u;
    t19 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t18, 4u, COW_IMG(0x103c1fb0u), 0x1deu, rd32(sp0 - 0x74u));
    t20 = g->edx;
    wr32(esi + 0x4cu, t19);
    wr32(sp0 - 0x88u, arg1);
    t21 = rd32(esi + 0x48u);
    wr32(sp0 - 0x8cu, t21);
    wr32(sp0 - 0x90u, 4u);
    wr32(sp0 - 0x94u, t19);
    g->ecx = t21;
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, t19, 4u, t21, arg1, rd32(sp0 - 0x84u), 4u, COW_IMG(0x103c1fb0u), 0x1deu, rd32(sp0 - 0x74u), 4u, 1u);
    t22 = g->ecx;
    t23 = rd32(ebx + 0x14u);
    wr32(sp0 - 0x98u, t23);
    t24 = rd32(ebx + 0x54u);
    wr32(sp0 - 0x9cu, t24);
    wr32(sp0 - 0xa0u, esi + 0x14u);
    g->edx = t23;
    g->esp = sp0 - 0x5cu;
    cow_bridge_indirect(g, COW_IMG(0x1028da40u), 0u, 17u, (const uint32_t[]){esi + 0x14u, t24, t23, rd32(sp0 - 0x94u), 4u, rd32(sp0 - 0x8cu), arg1, rd32(sp0 - 0x84u), 4u, COW_IMG(0x103c1fb0u), 0x1deu, rd32(sp0 - 0x74u), 4u, 1u, arg1, in_edi, rd32(sp0 - 0x60u)}, g->ecx, g->edx, g->eax, 68u);
    t25 = g->edx;
    q26 = (int64_t)cow_muls(0x55555556u, rd32(esi + 0x48u));
    t27 = cow_qhi(q26) + (cow_qhi(q26) >> 0x1fu);
    wr32(esi + 0x44u, t27);
    wr32(esi + 0x34u, ebx);
    g->ebx = rd32(sp0 - 0x58u);
    g->esi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x5cu);
    return esi;
L_102b5b77: ;
    wr32(sp0 - 0x64u, sp0 - 0x54u);
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x102b53d0u), 3, sp0 - 0x54u, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu));
L_102b5b84: ;
    g->ebx = rd32(sp0 - 0x58u);
    g->esi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x5cu);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b5a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b5a60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
