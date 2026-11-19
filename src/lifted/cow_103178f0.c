/* f_0x103178f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_103178f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 176u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10317908u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x94u); goto E_10317908;
    case 0x10317911u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x94u); goto E_10317911;
    case 0x1031791fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; loc_98 = rd32(sp0 - 0x98u); goto E_1031791f;
    case 0x10317927u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; loc_98 = rd32(sp0 - 0x98u); goto E_10317927;
    case 0x10317931u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; loc_98 = rd32(sp0 - 0x98u); goto E_10317931;
    case 0x10317936u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_10317936;
    case 0x1031793bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_1031793b;
    case 0x1031794bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_1031794b;
    case 0x1031795au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_1031795a;
    case 0x1031796fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_1031796f;
    case 0x10317978u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_10317978;
    case 0x10317982u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_10317982;
    case 0x1031798cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); loc_8 = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x98u); goto E_1031798c;
    case 0x103179a3u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179a3;
    case 0x103179a5u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179a5;
    case 0x103179a7u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179a7;
    case 0x103179b4u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_103179b4;
    case 0x103179bdu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_103179bd;
    case 0x103179cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179cb;
    case 0x103179ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_103179ce;
    case 0x103179deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179de;
    case 0x103179ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179eb;
    case 0x103179f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_103179f9;
    case 0x10317a0du: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a0d;
    case 0x10317a12u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a12;
    case 0x10317a18u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a18;
    case 0x10317a44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a44;
    case 0x10317a47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a47;
    case 0x10317a4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a4e;
    case 0x10317a54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a54;
    case 0x10317a6bu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a6b;
    case 0x10317a6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317a6d;
    case 0x10317a7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317a7c;
    case 0x10317a80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317a80;
    case 0x10317a86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317a86;
    case 0x10317a8du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0x98u); goto E_10317a8d;
    case 0x10317aa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317aa6;
    case 0x10317aadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317aad;
    case 0x10317ab1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317ab1;
    case 0x10317ac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10317ac5;
    case 0x10317ad8u: eax = g->eax; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10317ad8;
    case 0x10317addu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; goto E_10317add;
    case 0x10317ae0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317ae0;
    case 0x10317aecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317aec;
    case 0x10317af3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317af3;
    case 0x10317b0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; loc_8 = rd32(sp0 - 8u); goto E_10317b0e;
    case 0x10317b16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_98 = rd32(sp0 - 0x98u); loc_8 = rd32(sp0 - 8u); goto E_10317b16;
    case 0x10317b1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317b1b;
    case 0x10317b1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_98 = rd32(sp0 - 0x98u); loc_8 = rd32(sp0 - 8u); goto E_10317b1d;
    case 0x10317b25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10317b25;
    case 0x10317b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x90u); g->esi = rd32(sp0 - 0x94u); goto E_10317b30;
    case 0x10317b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_4 = rd32(sp0 - 4u); goto E_10317b32;
    default: break;
    }
#endif

    COW_AT(103178f0)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_esi);
    if ((int32_t)rd32(sp0 + 4u) < 0) goto L_10317b30;
    esi = rd32(sp0 + 4u);
    COW_AT(10317908)
    if ((int32_t)esi > 5) goto L_10317b30;
    COW_AT(10317911)
    wr32(sp0 - 0x98u, 0x13u);
    g->ebx = 0u;
    g->eax = in_eax;
    g->esp = sp0 - 0x8cu;
    t1 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0x13u, in_esi, in_ebx);
    t2 = g->edx;
    wr32(COW_IMG(0x109f840cu), rd32(COW_IMG(0x109f840cu)) + 1u);
    eax = t1;
    ecx = 0x13u;
    edx = t2;
L_1031791f: ;
    COW_AT(1031791f)
    if (rd32(COW_IMG(0x109f8410u)) == 0u) goto L_10317931;
    COW_AT(10317927)
    wr32(sp0 - 0x98u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t3 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 1u);   /* kernel32.dll!Sleep */
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    goto L_1031791f;
L_10317931: ;
    COW_AT(10317931)
    wr32(sp0 - 0x98u, in_edi);
    if (esi == 0u) goto L_1031795a;
    COW_AT(10317936)
    if (rd32(sp0 + 8u) == 0u) goto L_1031794b;
    COW_AT(1031793b)
    t6 = rd32(sp0 + 8u);
    wr32(sp0 - 0x9cu, t6);
    wr32(sp0 - 0xa0u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t7 = cow_cdecl(g, COW_IMG(0x10317b36u), 4, esi, t6, in_edi, rd32(sp0 - 0x94u));
    t8 = g->edx;
    eax = t7;
    ecx = rd32(sp0 - 0x9cu);
    edx = t8;
L_10317b1b: ;
    COW_AT(10317b1b)
    esi = eax;
    loc_98 = rd32(sp0 - 0x98u);
L_10317b1d: ;
    COW_AT(10317b1d)
    wr32(sp0 - 0x9cu, 0x13u);
    g->esp = sp0 - 0x90u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, loc_98, rd32(sp0 - 0x94u));
L_10317b25: ;
    COW_AT(10317b25)
    wr32(COW_IMG(0x109f840cu), rd32(COW_IMG(0x109f840cu)) - 1u);
    eax = esi;
    edi = rd32(sp0 - 0x98u);
    loc_4 = rd32(sp0 - 4u);
    loc_90 = rd32(sp0 - 0x90u);
    loc_94 = rd32(sp0 - 0x94u);
L_10317b32: ;
    COW_AT(10317b32)
    g->ebx = loc_90;
    g->esi = loc_94;
    g->edi = edi;
    g->ebp = loc_4;
    return eax;
L_1031794b: ;
    COW_AT(1031794b)
    eax = esi * 3u;
    esi = rd32(COW_IMG(0x103d0734u) + esi * 0xcu);
    loc_98 = in_edi;
    goto L_10317b1d;
L_1031795a: ;
    COW_AT(1031795a)
    wr32(sp0 - 8u, 1u);
    t9 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, 0u);
    if (t9 == 0u)
    {
        loc_98 = in_edi;
        goto L_10317b16;
    }
    edi = t9;
    COW_AT(1031796f)
    if (rd8(edi) != 0x4cu) goto L_10317a8d;
    COW_AT(10317978)
    if (rd8(edi + 1u) != 0x43u) goto L_10317a8d;
    COW_AT(10317982)
    if (rd8(edi + 2u) != 0x5fu) goto L_10317a8d;
    COW_AT(1031798c)
    wr32(sp0 - 0x9cu, COW_IMG(0x1034a2b8u));
    wr32(sp0 - 0xa0u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x10322bf0u), ecx, 4, edi, COW_IMG(0x1034a2b8u), in_edi, rd32(sp0 - 0x94u));
    t11 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        ecx = COW_IMG(0x1034a2b8u);
        edx = t11;
        goto L_10317a6d;
    }
    edx = t11;
    esi = t10;
    COW_AT(103179a3)
L_103179a7: ;
    COW_AT(103179a7)
    wr32(sp0 - 8u, esi - edi);
    if (esi == edi)
    {
        eax = esi - edi;
        ecx = COW_IMG(0x1034a2b8u);
        goto L_10317a6d;
    }
    eax = esi - edi;
    loc_8 = esi - edi;
    COW_AT(103179b4)
    if (rd8(esi) == 0x3bu)
    {
        ecx = COW_IMG(0x1034a2b8u);
        goto L_10317a6d;
    }
    COW_AT(103179bd)
    wr32(sp0 + 8u, 1u);
    ecx = COW_IMG(0x1034a2b8u);
    ebx = COW_IMG(0x103d073cu);
L_103179ce: ;
    COW_AT(103179ce)
    wr32(sp0 - 0x9cu, eax);
    wr32(sp0 - 0xa0u, edi);
    wr32(sp0 - 0xa4u, rd32(ebx));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t12 = cow_cdecl(g, COW_IMG(0x10312980u), 5, rd32(ebx), edi, eax, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_103179eb;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    COW_AT(103179de)
    wr32(sp0 - 0x9cu, rd32(ebx));
    g->edx = edx;
    t15 = rd32(ebx);
    g->esp = sp0 - 0x98u;
    t16 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, t15);
    t17 = g->edx;
    if (rd32(sp0 - 8u) == t16)
    {
        eax = t16;
        ecx = rd32(sp0 - 0x9cu);
        edx = t17;
        goto L_103179f9;
    }
    eax = t16;
    ecx = rd32(sp0 - 0x9cu);
    edx = t17;
L_103179eb: ;
    COW_AT(103179eb)
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
    if ((int32_t)(ebx + 0xcu) <= (int32_t)COW_IMG(0x103d076cu))
    {
        ebx = ebx + 0xcu;
        goto L_103179cb;
    }
L_103179f9: ;
    COW_AT(103179f9)
    wr32(sp0 - 0x9cu, COW_IMG(0x1034a2b4u));
    wr32(sp0 - 0xa0u, esi + 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t18 = cow_thiscall_cdecl(g, COW_IMG(0x10322bb0u), ecx, 4, esi + 1u, COW_IMG(0x1034a2b4u), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t19 = g->edx;
    if (t18 != 0u)
    {
        eax = t18;
        edx = t19;
        esi = esi + 1u;
        edi = t18;
        goto L_10317a12;
    }
    eax = t18;
    edx = t19;
    esi = esi + 1u;
    edi = t18;
    COW_AT(10317a0d)
    if (rd8(esi) != 0x3bu)
    {
        ecx = COW_IMG(0x1034a2b4u);
        goto L_10317a6d;
    }
L_10317a12: ;
    COW_AT(10317a12)
    if ((int32_t)rd32(sp0 + 8u) > 5)
    {
        ecx = COW_IMG(0x1034a2b4u);
    }
    else
    {
    COW_AT(10317a18)
        wr32(sp0 - 0x9cu, edi);
        wr32(sp0 - 0xa0u, esi);
        wr32(sp0 - 0xa4u, sp0 - 0x8cu);
        g->ecx = COW_IMG(0x1034a2b4u);
        g->edx = edx;
        g->esp = sp0 - 0x98u;
        cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x8cu, g->ecx, g->edx, 1, 3, sp0 - 0x8cu, esi, edi);
        t20 = g->ecx;
        t21 = g->edx;
        wr8(edi + sp0 - 0x8cu, 0u);
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        t22 = rd32(sp0 + 8u);
        wr32(sp0 - 0xacu, t22);
        g->eax = sp0 - 0x8cu;
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp0 - 0x9cu;
        t23 = cow_cdecl(g, COW_IMG(0x10317b36u), 4, t22, sp0 - 0x8cu, sp0 - 0x8cu, rd32(sp0 - 0xa0u));
        t24 = g->ecx;
        t25 = g->edx;
        if (t23 == 0u)
        {
            eax = t23;
            ecx = t24;
            edx = t25;
        }
        else
        {
            eax = t23;
            ecx = t24;
            edx = t25;
    COW_AT(10317a44)
            wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
        }
    }
    COW_AT(10317a47)
    if (rd8(edi + esi) == 0u) goto L_10317a7c;
    edi = edi + esi;
    COW_AT(10317a4e)
    if (rd8(edi + 1u) == 0u) goto L_10317a7c;
    edi = edi + 1u;
    COW_AT(10317a54)
    wr32(sp0 - 0x9cu, COW_IMG(0x1034a2b8u));
    wr32(sp0 - 0xa0u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x90u;
    t26 = cow_thiscall_cdecl(g, COW_IMG(0x10322bf0u), ecx, 4, edi, COW_IMG(0x1034a2b8u), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t27 = g->edx;
    if (t26 != 0u)
    {
        edx = t27;
        esi = t26;
        goto L_103179a5;
    }
    eax = t26;
    edx = t27;
    COW_AT(10317a6b)
    ecx = COW_IMG(0x1034a2b8u);
L_10317a6d: ;
    COW_AT(10317a6d)
    wr32(sp0 - 0x9cu, 0x13u);
    g->esp = sp0 - 0x90u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    esi = 0u;
    goto L_10317b25;
L_103179a5: ;
    COW_AT(103179a5)
    goto L_103179a7;
L_103179cb: ;
    COW_AT(103179cb)
    eax = rd32(sp0 - 8u);
    loc_8 = rd32(sp0 - 8u);
    goto L_103179ce;
L_10317a7c: ;
    COW_AT(10317a7c)
    zf = rd32(sp0 + 4u) == 0u;
L_10317a80: ;
    COW_AT(10317a80)
    if (!zf)
    {
        loc_98 = rd32(sp0 - 0x98u);
        goto L_10317b16;
    }
    COW_AT(10317a86)
    esi = 0u;
    loc_98 = rd32(sp0 - 0x98u);
    goto L_10317b1d;
L_10317a8d: ;
    COW_AT(10317a8d)
    wr32(sp0 - 0x9cu, 0u);
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, sp0 - 0x8cu);
    wr32(sp0 - 0xacu, edi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t28 = cow_call_regs(g, COW_IMG(0x10317d0au), sp0 - 0x8cu, g->ecx, g->edx, 1, 4, edi, sp0 - 0x8cu, 0u, 0u);
    t29 = g->ecx;
    t30 = g->edx;
    if (t28 == 0u)
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        esi = t28;
        loc_98 = in_edi;
        goto L_10317b1d;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(10317aa6)
    ebx = 0u;
    edi = COW_IMG(0x103d0734u);
    loc_8 = rd32(sp0 - 8u);
L_10317aad: ;
    COW_AT(10317aad)
    if (edi != COW_IMG(0x103d0734u))
    {
    COW_AT(10317ab1)
        wr32(sp0 - 0x9cu, rd32(edi));
        wr32(sp0 - 0xa0u, sp0 - 0x8cu);
        g->edi = edi;
        g->edx = edx;
        t31 = rd32(edi);
        g->esp = sp0 - 0x98u;
        t32 = cow_call_regs(g, COW_IMG(0x10320960u), sp0 - 0x8cu, g->ecx, g->edx, 1, 2, sp0 - 0x8cu, t31);
        t33 = g->edx;
        t34 = g->edi;
        if (t32 == 0u)
        {
            eax = t32;
            ecx = rd32(sp0 - 0x9cu);
            edx = t33;
            edi = t34;
            goto L_10317add;
        }
        ecx = rd32(sp0 - 0x9cu);
        edx = t33;
        edi = t34;
    COW_AT(10317ac5)
        wr32(sp0 - 0x9cu, sp0 - 0x8cu);
        wr32(sp0 - 0xa0u, ebx);
        g->eax = sp0 - 0x8cu;
        g->edx = edx;
        g->esp = sp0 - 0x90u;
        t35 = cow_cdecl(g, COW_IMG(0x10317b36u), 4, ebx, sp0 - 0x8cu, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
        t36 = g->edx;
        if (t35 != 0u)
        {
            eax = t35;
            ecx = sp0 - 0x8cu;
            edx = t36;
            goto L_10317add;
        }
        eax = t35;
        edx = t36;
    COW_AT(10317ad8)
        t37 = rd32(sp0 - 8u) & eax;
        wr32(sp0 - 8u, t37);
        ecx = sp0 - 0x8cu;
        loc_8 = t37;
    }
L_10317ae0: ;
    COW_AT(10317ae0)
    if ((int32_t)(edi + 0xcu) <= (int32_t)COW_IMG(0x103d0770u))
    {
        ebx = ebx + 1u;
        edi = edi + 0xcu;
        goto L_10317aad;
    }
    ebx = ebx + 1u;
    COW_AT(10317aec)
    if (loc_8 == 0u) goto L_10317b0e;
    COW_AT(10317af3)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x98u;
    t38 = cow_call_regs(g, COW_IMG(0x10317c51u), g->eax, g->ecx, edx, 1, 0);
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0x9cu, rd32(COW_IMG(0x103d0734u)));
    g->ebx = ebx;
    t41 = rd32(COW_IMG(0x103d0734u));
    g->esp = sp0 - 0x90u;
    t42 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t39, t40, 1, 3, t41, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    t43 = g->edx;
    t44 = rd32(sp0 - 0x9cu);
    wr32(COW_IMG(0x103d0734u), 0u);
    eax = t42;
    ecx = t44;
    edx = t43;
    esi = t38;
    loc_98 = rd32(sp0 - 0x98u);
    goto L_10317b1d;
L_10317add: ;
    COW_AT(10317add)
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    loc_8 = rd32(sp0 - 8u);
    goto L_10317ae0;
L_10317b0e: ;
    COW_AT(10317b0e)
    zf = rd32(sp0 + 4u) == 0u;
    goto L_10317a80;
L_10317b16: ;
    COW_AT(10317b16)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x98u;
    t45 = cow_call_regs(g, COW_IMG(0x10317c51u), g->eax, g->ecx, edx, 1, 0);
    t46 = g->ecx;
    t47 = g->edx;
    eax = t45;
    ecx = t46;
    edx = t47;
    goto L_10317b1b;
L_10317b30: ;
    COW_AT(10317b30)
    eax = 0u;
    edi = in_edi;
    loc_4 = in_ebp;
    loc_90 = in_ebx;
    loc_94 = in_esi;
    goto L_10317b32;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103178f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10317908u:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317911u:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031791fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_98;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317927u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_98;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317931u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_98;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x94u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317936u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031793bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031794bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031795au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031796fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10317978u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10317982u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1031798cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ecx = COW_IMG(0x1034a2b8u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ecx = COW_IMG(0x1034a2b8u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ecx = COW_IMG(0x1034a2b8u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ecx = COW_IMG(0x1034a2b8u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179bdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ecx = COW_IMG(0x1034a2b8u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179ebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103179f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a0du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ecx = COW_IMG(0x1034a2b4u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a12u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ecx = COW_IMG(0x1034a2b4u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a18u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ecx = COW_IMG(0x1034a2b4u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a44u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        wr32(sp0 - 0xa4u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10317a47u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a54u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a6bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ecx = COW_IMG(0x1034a2b8u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a6du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a7cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a80u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a86u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317a8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10317aa6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10317aadu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10317ab1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10317ac5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        wr32(sp0 - 0xa0u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10317ad8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ecx = sp0 - 0x8cu;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        wr32(sp0 - 0x9cu, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10317addu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10317ae0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->esi = COW_IMG(0x103d0734u);
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10317aecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10317af3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10317b0eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0xa8u, sp0 - 0x8cu);
        (void)sp0;
        return 1;
    }
    case 0x10317b16u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_98;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_98 = rd32(sp0 - 0x98u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317b1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317b1du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_98;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_98 = rd32(sp0 - 0x98u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317b25u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317b30u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x94u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10317b32u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x94u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103178f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_103178f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
