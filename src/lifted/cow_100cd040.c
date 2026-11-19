/* f_0x100cd040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_100cd040(Guest* g)
{
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d4;
    double d51;
    double d52;
    double d67;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    double loc_30_f;
    uint32_t loc_34;
    double loc_38_f;
    uint32_t loc_3c;
    uint32_t loc_48;
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
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100cd04cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_100cd04c;
    case 0x100cd081u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd081;
    case 0x100cd09au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_38_f = rdf32(sp0 - 0x38u); goto E_100cd09a;
    case 0x100cd0a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_38_f = rdf32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100cd0a4;
    case 0x100cd0bau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_38_f = rdf32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_100cd0ba;
    case 0x100cd0cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd0cb;
    case 0x100cd0d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd0d0;
    case 0x100cd0e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd0e3;
    case 0x100cd0f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd0f7;
    case 0x100cd0ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd0ff;
    case 0x100cd10du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd10d;
    case 0x100cd115u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100cd115;
    case 0x100cd12eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_38_f = rdf32(sp0 - 0x38u); loc_1c = rd32(sp0 - 0x1cu); goto E_100cd12e;
    case 0x100cd141u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; loc_38_f = rdf32(sp0 - 0x38u); loc_1c = rd32(sp0 - 0x1cu); goto E_100cd141;
    case 0x100cd14bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_38_f = rdf32(sp0 - 0x38u); loc_1c = rd32(sp0 - 0x1cu); goto E_100cd14b;
    case 0x100cd15au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_38_f = rdf32(sp0 - 0x38u); loc_1c = rd32(sp0 - 0x1cu); goto E_100cd15a;
    case 0x100cd164u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_38_f = rdf32(sp0 - 0x38u); loc_1c = rd32(sp0 - 0x1cu); goto E_100cd164;
    case 0x100cd179u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_38_f = rdf32(sp0 - 0x38u); loc_1c = rd32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd179;
    case 0x100cd181u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_38_f = rdf32(sp0 - 0x38u); loc_1c = rd32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd181;
    case 0x100cd197u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_38_f = rdf32(sp0 - 0x38u); loc_1c = rd32(sp0 - 0x1cu); goto E_100cd197;
    case 0x100cd1a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd1a1;
    case 0x100cd1a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd1a5;
    case 0x100cd1adu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_100cd1ad;
    case 0x100cd1bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x48u); goto E_100cd1bc;
    case 0x100cd1c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x48u); goto E_100cd1c4;
    case 0x100cd1ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_ebx = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); g->ebx = rd32(sp0 - 0x48u); goto E_100cd1cc;
    case 0x100cd1d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100cd1d6;
    case 0x100cd1dau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100cd1da;
    case 0x100cd1e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100cd1e1;
    case 0x100cd1e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100cd1e6;
    case 0x100cd1eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100cd1ea;
    case 0x100cd1f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); goto E_100cd1f2;
    case 0x100cd1fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); goto E_100cd1fa;
    case 0x100cd206u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); goto E_100cd206;
    case 0x100cd20bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd20b;
    case 0x100cd215u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd215;
    case 0x100cd21du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd21d;
    case 0x100cd229u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd229;
    case 0x100cd231u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd231;
    case 0x100cd23fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd23f;
    case 0x100cd24bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd24b;
    case 0x100cd253u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd253;
    case 0x100cd25eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd25e;
    case 0x100cd269u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd269;
    case 0x100cd27du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd27d;
    case 0x100cd29bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_30_f = rdf32(sp0 - 0x30u); goto E_100cd29b;
    case 0x100cd2acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_30_f = rdf32(sp0 - 0x30u); goto E_100cd2ac;
    case 0x100cd2b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_30_f = rdf32(sp0 - 0x30u); goto E_100cd2b6;
    case 0x100cd2cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_30_f = rdf32(sp0 - 0x30u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd2cb;
    case 0x100cd2d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_30_f = rdf32(sp0 - 0x30u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd2d3;
    case 0x100cd2e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_30_f = rdf32(sp0 - 0x30u); goto E_100cd2e7;
    case 0x100cd2f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_30_f = rdf32(sp0 - 0x30u); goto E_100cd2f5;
    case 0x100cd2fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_3c = rd32(sp0 - 0x3cu); loc_30_f = rdf32(sp0 - 0x30u); goto E_100cd2fd;
    case 0x100cd309u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd309;
    case 0x100cd30du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd30d;
    case 0x100cd315u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd315;
    case 0x100cd321u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd321;
    case 0x100cd326u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd326;
    case 0x100cd32au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd32a;
    case 0x100cd32eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd32e;
    case 0x100cd339u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd339;
    case 0x100cd346u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd346;
    case 0x100cd34du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd34d;
    case 0x100cd351u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd351;
    case 0x100cd35fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd35f;
    case 0x100cd370u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd370;
    case 0x100cd374u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd374;
    case 0x100cd379u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd379;
    case 0x100cd37eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd37e;
    case 0x100cd384u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd384;
    case 0x100cd38du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd38d;
    case 0x100cd391u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd391;
    case 0x100cd39au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100cd39a;
    case 0x100cd3aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd3ae;
    case 0x100cd3b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100cd3b6;
    case 0x100cd3bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd3bc;
    case 0x100cd3c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd3c3;
    case 0x100cd3c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_100cd3c7;
    case 0x100cd3ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100cd3ce;
    default: break;
    }
#endif

    COW_AT(100cd040)
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x44u;
    t2 = cow_thiscall(g, rd32(t1 + 0x44u), self, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(100cd04c)
    wr32(sp0 - 0x30u, eax);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x48u, self);
    wr32(sp0 - 0x34u, 0x3f000000u);
    d4 = fr(g, (double)(int64_t)cow_i64(eax, 0u) * (double)rdf32(COW_IMG(0x1032a778u)));
    wr32(sp0 - 0x30u, 0x3e4ccccdu);
    wrf32(sp0 - 0x3cu, (float)(double)(float)d4);
    g->eax = eax;
    t5 = rd32(self + 0x70u);
    g->esp = sp0 - 0x44u;
    t6 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, self);
    d7 = cow_take_float(g);
    eax = t6;
    esi = t5;
    x0 = d7;
    COW_AT(100cd081)
    d8 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a404u)));
    wrf32(sp0 - 0x38u, (float)(double)(float)d8);
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329a08u)), 0u) & 0x4100u) != 0u)
    {
        loc_34 = 0x3f000000u;
    }
    else
    {
        loc_38_f = (double)(float)d8;
    COW_AT(100cd09a)
        if (rd32(self + 0x85cu) == 0u)
        {
            loc_34 = 0x3f000000u;
        }
        else
        {
    COW_AT(100cd0a4)
            d9 = fr(g, loc_38_f - (double)rdf32(COW_IMG(0x1032df40u)));
            wr32(sp0 - 0x34u, cow_f2bits(loc_38_f));
            wrf32(sp0 - 0x30u, (float)(double)(float)d9);
            loc_34 = cow_f2bits(loc_38_f);
        }
    }
    COW_AT(100cd0ba)
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    wr32(sp0 - 0x4cu, 0xcu);
    g->eax = sp0 - 0x10u;
    g->edx = rd32(self);
    t10 = rd32(self);
    g->esp = sp0 - 0x44u;
    t11 = cow_thiscall(g, rd32(t10 + 0x1c4u), self, 2, 0xcu, sp0 - 0x10u);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(100cd0cb)
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t14 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    eax = t14;
    COW_AT(100cd0d0)
    wr32(sp0 - 0x48u, eax + 0x44u);
    wr32(sp0 - 0x4cu, sp0 - 0x10u);
    wr32(sp0 - 0x50u, sp0 - 0x20u);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x20u, sp0 - 0x10u, eax + 0x44u);
    COW_AT(100cd0e3)
    wr32(sp0 - 0x54u, sp0 - 0x20u);
    wr32(sp0 - 0x58u, sp0 - 0x20u);
    wr32(sp0 - 0x5cu, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->ecx = sp0 - 0x20u;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x50u;
    t15 = cow_cdecl(g, COW_IMG(0x10027340u), 3, sp0 - 0x20u, sp0 - 0x20u, sp0 - 0x20u);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(100cd0f7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t18 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(100cd0ff)
    d20 = (double)rdf32(sp0 - 0xcu);
    d21 = (double)rdf32(eax + 0x48u);
    if (!(d20 < d21))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, d21, 0u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, d21, 0u);
    COW_AT(100cd10d)
        wr32(sp0 - 0x1cu, 0u);
        loc_1c = 0u;
    }
    COW_AT(100cd115)
    d22 = fr(g, sqrt(fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(sp0 - 0x20u))));
    wrf32(sp0 - 0x38u, (float)(double)(float)d22);
    d23 = (double)rdf32(sp0 - 0x34u);
    if (!(d22 < d23)) goto L_100cd197;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, d23, 0u);
    loc_38_f = (double)(float)d22;
    COW_AT(100cd12e)
    d24 = fr(g, sqrt(cow_bits2f(loc_1c)));
    d25 = (double)rdf32(sp0 - 0x34u);
    if ((cow_fsw(g, d24, d25, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d24, d25, 0u) & 0x4100u;
        goto L_100cd14b;
    }
    COW_AT(100cd141)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    fpush(g, (double)rdf32(sp0 - 0x3cu));
    return;
L_100cd14b: ;
    COW_AT(100cd14b)
    d26 = (double)rdf32(sp0 - 0x30u);
    if (!(loc_38_f < d26))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_38_f, d26, 0u);
    COW_AT(100cd164)
        if (!(loc_38_f < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            x0 = loc_38_f;
        }
        else
        {
            x0 = loc_38_f;
    COW_AT(100cd179)
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
        }
    COW_AT(100cd181)
        d27 = fr(g, fr(g, fr(g, x0 - (double)rdf32(sp0 - 0x30u)) / fr(g, (double)rdf32(sp0 - 0x34u) - (double)rdf32(sp0 - 0x30u))) * (double)rdf32(sp0 - 0x3cu));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d27);
    }
    else
    {
    COW_AT(100cd15a)
        wr32(sp0 - 0x3cu, 0u);
    }
L_100cd197: ;
    COW_AT(100cd197)
    g->eax = rd32(self);
    g->edx = edx;
    t28 = rd32(self);
    g->esp = sp0 - 0x44u;
    t29 = cow_thiscall(g, rd32(t28 + 0x260u), self, 0);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(100cd1a1)
    if ((uint8_t)eax == 0u)
    {
        loc_3c = rd32(sp0 - 0x3cu);
    }
    else
    {
    COW_AT(100cd1a5)
        wr32(sp0 - 0x3cu, 0u);
        loc_3c = 0u;
    }
    COW_AT(100cd1ad)
    wr32(sp0 - 0x48u, in_ebx);
    if (rd8(COW_IMG(0x10487f80u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
        loc_48 = in_ebx;
        goto L_100cd1f2;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f80u));
    COW_AT(100cd1bc)
    if (esi == 0u)
    {
        loc_48 = in_ebx;
        goto L_100cd2fd;
    }
    COW_AT(100cd1c4)
    if ((rd32(esi + 0x1d0u) & 0xffffff1fu) == 0u)
    {
        loc_48 = in_ebx;
    }
    else
    {
    COW_AT(100cd1cc)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t32 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t33 = g->ecx;
        t34 = g->edx;
        eax = t32;
        ecx = t33;
        edx = t34;
    COW_AT(100cd1d6)
        if (eax == 0u)
        {
            loc_3c = rd32(sp0 - 0x3cu);
            loc_48 = rd32(sp0 - 0x48u);
        }
        else
        {
    COW_AT(100cd1da)
            if (rd32(eax + 0x70u) == 0u)
            {
                ecx = rd32(eax + 0x70u);
                loc_3c = rd32(sp0 - 0x3cu);
                loc_48 = rd32(sp0 - 0x48u);
            }
            else
            {
                ecx = rd32(eax + 0x70u);
    COW_AT(100cd1e1)
                g->edx = edx;
                g->esp = sp0 - 0x48u;
                t35 = cow_call_regs(g, COW_IMG(0x10097a40u), eax, ecx, g->edx, 1, 0);
                t36 = g->ecx;
                t37 = g->edx;
                eax = t35;
                ecx = t36;
                edx = t37;
    COW_AT(100cd1e6)
                if (esi != eax)
                {
                    loc_3c = rd32(sp0 - 0x3cu);
                    loc_48 = rd32(sp0 - 0x48u);
                }
                else
                {
    COW_AT(100cd1ea)
                    wr32(sp0 - 0x3cu, 0u);
                    loc_3c = 0u;
                    loc_48 = rd32(sp0 - 0x48u);
                }
            }
        }
    }
L_100cd1f2: ;
    COW_AT(100cd1f2)
    if (esi != 0u)
    {
    COW_AT(100cd1fa)
        if ((rd32(esi + 0x1d0u) & 0xffffff1fu) != 0u)
        {
    COW_AT(100cd206)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            t38 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
            t39 = g->ecx;
            t40 = g->edx;
            eax = t38;
            ecx = t39;
            edx = t40;
    COW_AT(100cd20b)
            if (eax == 0u)
            {
                loc_48 = rd32(sp0 - 0x48u);
            }
            else
            {
                ebx = eax;
    COW_AT(100cd215)
                if (ebx == esi)
                {
                    loc_48 = rd32(sp0 - 0x48u);
                }
                else
                {
    COW_AT(100cd21d)
                    wr32(sp0 - 0x4cu, 0xffu);
                    g->eax = eax;
                    g->esp = sp0 - 0x48u;
                    t41 = cow_thiscall(g, COW_IMG(0x100956c0u), ebx, 1, 0xffu);
                    t42 = g->ecx;
                    eax = t41;
                    ecx = t42;
    COW_AT(100cd229)
                    if ((uint8_t)eax == 0u)
                    {
                        loc_48 = rd32(sp0 - 0x48u);
                    }
                    else
                    {
    COW_AT(100cd231)
                        if (rd32(ebx + 0xa0u) == 0u)
                        {
                            ecx = rd32(ebx + 0xa0u);
                            loc_48 = rd32(sp0 - 0x48u);
                        }
                        else
                        {
                            ecx = rd32(ebx + 0xa0u);
    COW_AT(100cd23f)
                            if (rd32(ebx + 0xa4u) == self)
                            {
                                loc_48 = rd32(sp0 - 0x48u);
                            }
                            else
                            {
    COW_AT(100cd24b)
                                g->eax = eax;
                                g->edx = rd32(ecx);
                                t43 = rd32(ecx);
                                g->esp = sp0 - 0x48u;
                                t44 = cow_thiscall(g, rd32(t43 + 0x1bcu), ecx, 0);
                                t45 = g->edx;
                                eax = t44;
                                edx = t45;
    COW_AT(100cd253)
                                wr32(sp0 - 0x4cu, eax);
                                g->eax = rd32(self);
                                g->edx = edx;
                                t46 = rd32(self);
                                g->esp = sp0 - 0x48u;
                                t47 = cow_thiscall_cdecl(g, rd32(t46 + 0x1bcu), self, 1, eax);
                                t48 = g->edx;
                                eax = t47;
                                edx = t48;
    COW_AT(100cd25e)
                                wr32(sp0 - 0x50u, eax);
                                wr32(sp0 - 0x54u, sp0 - 0x30u);
                                g->esp = sp0 - 0x48u;
                                cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x30u, eax, rd32(sp0 - 0x4cu));
    COW_AT(100cd269)
                                wr32(sp0 - 0x58u, sp0 - 0x30u);
                                wr32(sp0 - 0x5cu, sp0 - 0x30u);
                                wr32(sp0 - 0x60u, sp0 - 0x30u);
                                g->eax = sp0 - 0x30u;
                                g->ecx = sp0 - 0x30u;
                                g->esp = sp0 - 0x54u;
                                t49 = cow_cdecl(g, COW_IMG(0x10027340u), 3, sp0 - 0x30u, sp0 - 0x30u, sp0 - 0x30u);
                                t50 = g->ecx;
                                eax = t49;
                                ecx = t50;
    COW_AT(100cd27d)
                                d51 = fr(g, sqrt(fr(g, (double)rdf32(sp0 - 0x28u) + (double)rdf32(sp0 - 0x30u))));
                                wrf32(sp0 - 0x30u, (float)(double)(float)d51);
                                if (!(d51 < (double)rdf32(COW_IMG(0x10329ea0u))))
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d51, (double)rdf32(COW_IMG(0x10329ea0u)), 0u);
                                    loc_48 = rd32(sp0 - 0x48u);
                                }
                                else
                                {
                                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d51, (double)rdf32(COW_IMG(0x10329ea0u)), 0u);
                                    loc_30_f = (double)(float)d51;
    COW_AT(100cd29b)
                                    if (!(loc_30_f < (double)rdf32(COW_IMG(0x1032961cu))))
                                    {
                                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_30_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(100cd2b6)
                                        if (!(loc_30_f < (double)rdf32(COW_IMG(0x103295d8u))))
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_30_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                            x0 = loc_30_f;
                                        }
                                        else
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_30_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                                            x0 = loc_30_f;
    COW_AT(100cd2cb)
                                            x0 = (double)rdf32(COW_IMG(0x103295d8u));
                                        }
    COW_AT(100cd2d3)
                                        d52 = fr(g, fr(g, fr(g, x0 - (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032b6d4u))) * (double)rdf32(sp0 - 0x3cu));
                                        wrf32(sp0 - 0x3cu, (float)(double)(float)d52);
                                        loc_48 = rd32(sp0 - 0x48u);
                                    }
                                    else
                                    {
                                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_30_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(100cd2ac)
                                        wr32(sp0 - 0x3cu, 0u);
                                        loc_48 = rd32(sp0 - 0x48u);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    COW_AT(100cd2e7)
        if (!(rd32(esi + 0x130u) >> 0x12u & 1u))
        {
            edx = rd32(esi + 0x130u) >> 0x12u;
            loc_3c = rd32(sp0 - 0x3cu);
        }
        else
        {
            edx = rd32(esi + 0x130u) >> 0x12u;
    COW_AT(100cd2f5)
            wr32(sp0 - 0x3cu, 0x3f000000u);
            loc_3c = 0x3f000000u;
        }
    }
L_100cd2fd: ;
    COW_AT(100cd2fd)
    wr8(self + 0xb2u, rd8(self + 0xb2u) & 0xdfu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t53 = cow_call_regs(g, COW_IMG(0x10087890u), eax, g->ecx, g->edx, 1, 0);
    t54 = g->ecx;
    t55 = g->edx;
    eax = t53;
    ecx = t54;
    edx = t55;
    COW_AT(100cd309)
    if ((uint8_t)eax == 0u) goto L_100cd34d;
    COW_AT(100cd30d)
    if (esi == 0u) goto L_100cd39a;
    COW_AT(100cd315)
    if ((rd32(esi + 0x1d0u) & 0xffffff1fu) != 0u)
    {
    COW_AT(100cd321)
        g->ecx = ecx;
        g->esp = sp0 - 0x48u;
        t56 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
        t57 = g->ecx;
        eax = t56;
        ecx = t57;
    COW_AT(100cd326)
        if (eax != 0u)
        {
    COW_AT(100cd32a)
            if (eax != esi)
            {
    COW_AT(100cd32e)
                if ((rd8(eax + 0x13fu) & 0xfu) == 0u)
                {
                    eax = rd8(eax + 0x13fu) & 0xfu;
                }
                else
                {
                    eax = rd8(eax + 0x13fu) & 0xfu;
    COW_AT(100cd339)
                    if (eax == (rd8(esi + 0x13fu) & 0xfu))
                    {
                        ecx = rd8(esi + 0x13fu) & 0xfu;
                    }
                    else
                    {
                        ecx = rd8(esi + 0x13fu) & 0xfu;
    COW_AT(100cd346)
                        wr8(self + 0xb2u, rd8(self + 0xb2u) | 0x20u);
                    }
                }
            }
        }
    }
L_100cd34d: ;
    COW_AT(100cd34d)
    if (esi != 0u)
    {
    COW_AT(100cd351)
        if (rd32(esi + 0x13cu) >> 0x17u & 1u)
        {
            edx = rd32(esi + 0x13cu) >> 0x17u;
    COW_AT(100cd35f)
            g->edx = edx;
            t58 = rd32(esi + 0x128u);
            g->esp = sp0 - 0x48u;
            t59 = cow_call_regs(g, COW_IMG(0x10087ad0u), eax, g->ecx, g->edx, 1, 0);
            t60 = g->edx;
            eax = t59;
            edx = t60;
            ebx = t58 >> 0x1du & 1u;
    COW_AT(100cd370)
            if (eax == 0u) goto L_100cd384;
    COW_AT(100cd374)
            ecx = 0u;
            esi = rd32(esi + 0x78u);
L_100cd379: ;
    COW_AT(100cd379)
            if (esi == rd32(eax + ecx * 4u)) goto L_100cd3bc;
    COW_AT(100cd37e)
            if ((int32_t)(ecx + 1u) < 32)
            {
                ecx = ecx + 1u;
                goto L_100cd379;
            }
L_100cd384: ;
    COW_AT(100cd384)
            wr32(sp0 - 0x4cu, 0u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            t64 = cow_thiscall(g, COW_IMG(0x10085ac0u), self, 1, 0u);
            t65 = g->edx;
            eax = t64;
            edx = t65;
    COW_AT(100cd38d)
            if ((uint8_t)ebx != 0u)
            {
    COW_AT(100cd391)
                wr32(sp0 - 0x4cu, 0u);
                g->esp = sp0 - 0x48u;
                t66 = cow_call_regs(g, COW_IMG(0x10085b10u), eax, self, edx, 0, 1, 0u);
                eax = t66;
            }
        }
    }
L_100cd39a: ;
    COW_AT(100cd39a)
    d67 = (double)rdf32(sp0 - 0x3cu);
    if ((cow_fsw(g, d67, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
    {
        ebx = rd32(sp0 - 0x48u);
        x0 = d67;
    }
    else
    {
        ebx = rd32(sp0 - 0x48u);
        x0 = d67;
    COW_AT(100cd3ae)
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    COW_AT(100cd3b6)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    fpush(g, x0);
    return;
L_100cd3bc: ;
    COW_AT(100cd3bc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t61 = cow_thiscall(g, COW_IMG(0x10085ab0u), self, 0);
    t62 = g->edx;
    eax = t61;
    edx = t62;
    COW_AT(100cd3c3)
    if ((uint8_t)ebx != 0u)
    {
    COW_AT(100cd3c7)
        g->esp = sp0 - 0x48u;
        t63 = cow_call_regs(g, COW_IMG(0x10085ad0u), eax, self, edx, 1, 0);
        eax = t63;
    COW_AT(100cd3ce)
    }
    goto L_100cd39a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100cd040(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100cd04cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100cd081u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0x3f000000u);
        wr32(sp0 - 0x30u, 0x3e4ccccdu);
        (void)sp0;
        return 1;
    }
    case 0x100cd09au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x34u, 0x3f000000u);
        wr32(sp0 - 0x30u, 0x3e4ccccdu);
        (void)sp0;
        return 1;
    }
    case 0x100cd0a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_34;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100cd0bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_34;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100cd0cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd0d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x48u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd0e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd0f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd0ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd10du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd115u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd12eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd141u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_1c;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd14bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd15au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd164u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd179u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        double loc_38_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_1c = rd32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd181u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        double loc_38_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_1c = rd32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd197u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_1c;
        double loc_38_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x48u;
        g->ebx = 0xffffff1fu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x48u;
        g->ebx = 0xffffff1fu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_ebx = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x48u;
        g->ebx = 0xffffff1fu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0xffffff1fu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0xffffff1fu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0xffffff1fu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0xffffff1fu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0xffffff1fu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x48u;
        g->ebx = 0xffffff1fu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd1fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x48u;
        g->ebx = 0xffffff1fu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd206u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd20bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd215u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd21du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100cd229u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cd231u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cd23fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cd24bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cd253u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cd25eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        wr32(sp0 - 0x50u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100cd269u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x20u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x54u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100cd27du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        wr32(sp0 - 0x54u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100cd29bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        wr32(sp0 - 0x54u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100cd2acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        wr32(sp0 - 0x54u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100cd2b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        wr32(sp0 - 0x54u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100cd2cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_30_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        wr32(sp0 - 0x54u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100cd2d3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_30_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_30_f = rdf32(sp0 - 0x30u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        wr32(sp0 - 0x54u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x100cd2e7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_30_f;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd2f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_30_f;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd2fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double loc_30_f;
        uint32_t loc_3c;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30_f = rdf32(sp0 - 0x30u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd309u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd30du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd315u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd321u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd326u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd32au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd32eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd339u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd346u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd34du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd351u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd35fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd370u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd374u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd379u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd37eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd384u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd38du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd391u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd39au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd3aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100cd3b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x100cd3bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd3c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd3c7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x100cd3ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100cd040(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100cd040(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
